#include "mainwindow.h"
#include "ui_mainwindow.h"

double random(double start, double end) { return start + (end - start) * (rand() + rand() / (RAND_MAX + 1.0)) / (RAND_MAX + 1.0); }

void MainWindow::clrdx() //清除四个方格大小打勾
{
    ui->action_4->setChecked(false);
    ui->action_5->setChecked(false);
    ui->action_6->setChecked(false);\
    ui->action_1->setChecked(false);
}

void MainWindow::clrnd() //清除四个难度打勾
{
    ui->action->setChecked(false);
    ui->action_7->setChecked(false);
    ui->action_8->setChecked(false);
    ui->action_10->setChecked(false);
}

void MainWindow::paintEvent(QPaintEvent*)
{
    if (dist < 10) dist = 10; //最小方格大小不得小于10，否则将看不清数字
    this->setFixedSize(dist * (x + 4) > 120 ? dist * (x + 4) : 120, dist * (y + 4) + 42); //设置窗口尺寸
    QPainter painter(this);
    QFont font1("Microsoft Yahei", dist / 2);
    painter.setFont(font1);
    for (int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
        {
            painter.setPen(QPen(Qt::gray, double(dist) / 20));
            if (!m[i][j].fankai) //未翻开设置方格颜色
            {
                if (m[i][j].highlight && pressl && !protect) painter.setBrush(QColor(192, 255, 255)); //高亮显示
                else painter.setBrush(Qt::cyan); //正常方格
                if (m[i][j].biaoji || Win) painter.setBrush(Qt::lightGray); //标雷的方格标灰，赢了后将未标雷方格标灰
                if (over)
                {
                    if (!m[i][j].biaoji && m[i][j].bomb) painter.setBrush(Qt::yellow); //输了后将未标的雷变黄
                    if (m[i][j].biaoji && !m[i][j].bomb) painter.setBrush(Qt::darkCyan); //将标错的雷变深蓝绿色
                }
            }
            else if (!m[i][j].bomb) painter.setBrush(Qt::white); //翻开的方格背景为白色
            else painter.setBrush(Qt::red); //如果翻开了雷，则翻开的雷为红色
            painter.drawRect(dist * (i + 2), dist * (j + 2) + 22, dist, dist);
            if (m[i][j].fankai && !m[i][j].bomb && m[i][j].num) //翻开了不是雷的数字不为0的方块
            {
                QColor temp;
                switch (m[i][j].num) //根据数字设置颜色
                {
                case 1: temp = Qt::blue; break;
                case 2: temp = Qt::darkGreen; break;
                case 3: temp = Qt::red; break;
                case 4: temp = Qt::darkBlue; break;
                case 5: temp = Qt::darkRed; break;
                case 6: temp = Qt::darkCyan; break;
                case 7: temp = Qt::black; break;
                case 8: temp = Qt::darkGray; break;
                }
                painter.setPen(temp);
                painter.drawText((2.3 + i) * dist + 1, (2.75 + j) * dist + 23, QString::number(m[i][j].num));
            }
            m[i][j].highlight = false; //把高亮显示的复位
        }
}

void MainWindow::fankai(int x0, int y0, int x1, int y1) //翻开坐标(x0, y0)的方块
{
    if (valid(x0, y0))
    {
        if(m[x0][y0].fankai || m[x0][y0].biaoji) return; //不翻开已经被翻开的和被标记的方块
        if(abs(x0 - x1) > 50 || abs(y0 - y1) > 50)
            return; //若雷区大雷少，连续翻开太多空白区域，会导致递归栈溢出，因此只翻开点击位置50方邻域内
        m[x0][y0].fankai = true;
        if (m[x0][y0].bomb) //翻到雷
        {
            over = true;
            return;
        }
        count++;
        if (count == x * y - lei) win(); //翻开的个数等于所有非雷格数则胜利
        if (m[x0][y0].num == 0) //若数字为0，翻开其周围的方格
            fankai8(x0, y0, x1, y1);
    }
}

void MainWindow::fankai8(int x0, int y0, int x1, int y1)
{
    for(int i = x0 - 1; i <= x0 + 1; i++)
        for(int j = y0 - 1; j <= y0 + 1; j++)
            fankai(i, j, x1, y1);
}

void MainWindow::gameover()
{
    timer->stop();
    _timer();
    showstat();
    QMessageBox::information(this, "提示", "游戏结束！");
}

void MainWindow::win()
{
    Win = true;
    timer->stop();
    _timer();
    r = 0;
    showstat();
    QMessageBox::information(this, "提示", "你赢了！");
}

bool MainWindow::valid(int x0, int y0) //判断该方格是否在雷区内
{
    if (x0 >= 0 && y0 >= 0 && x0 < x && y0 < y)
        return true;
    else return false;
}
void MainWindow::mousePressEvent(QMouseEvent *event) //鼠标按下事件
{
    if(event->button() == Qt::LeftButton) //分别按下左右键
        pressl = true;
    if(event->button() == Qt::RightButton)
    {
        pressr = true;
        if (pressl) protect = false; //按下右键时解除左键保护
    }
    int x1 = event->pos().x() / dist - 2; //获取鼠标点击位置是哪个方格
    int y1 = (event->pos().y() - 22) / dist - 2;
    if(valid(x1, y1) && !over && !Win)
        if(!pressl && event->button() == Qt::RightButton && !m[x1][y1].fankai)
        {
            m[x1][y1].biaoji = !m[x1][y1].biaoji; //按下右键时标雷
            if (m[x1][y1].biaoji) r--; //剩余雷数加减
            else r++;
        }
    mouseMoveEvent(event); //按下时触发鼠标移动事件
    update();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event) //鼠标移动事件，用于高亮显示选中的方块
{
    if (!pressl || protect) return; //只有按住左键且未保护时选中方块
    int x1 = event->pos().x() / dist - 2;
    int y1 = (event->pos().y() - 22) / dist - 2;
    if(valid(x1, y1) && !over && !Win)
    {
        if (pressr) for (int i = x1 - 1; i <= x1 + 1; i++) //同时按下左右键
            for(int j = y1 - 1; j <= y1 + 1; j++) //将当前方格和周围8个高亮显示
                if (valid(i, j))
                    m[i][j].highlight = true;
        m[x1][y1].highlight = true; //只按下左键就只让当前高亮显示
        update();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent* event)
{
    int x1 = event->pos().x() / dist - 2;
    int y1 = (event->pos().y() - 22) / dist - 2;
    if(valid(x1, y1) && !over && !Win)
    {
        if(!pressr && event->button() == Qt::LeftButton && !protect) //松开左键时触发翻开
        {
            if(!game) //初次点击生成游戏
            {
                game = f1 = true;
                if (hpre) timer->start(10); //设置计时器响应时间
                else timer->start(100);
                t0 = QDateTime::currentDateTime(); //获取当前时间
                int temp = 0, j = 0;
                int* arr = new int[x * y];
                for(int i = 0; i < x * y; i++)
                    arr[i] = i;
                for(int i = 0; i < x * y; i++) //进行随机排序
                {
                    int t_1 = random(0, x * y);
                    int t_2 = arr[i];
                    arr[i] = arr[t_1];
                    arr[t_1] = t_2;
                }
                while(temp < lei) //随机排序后，将前lei项设为雷，当然要保证初次点击位置以及周围8个不为雷
                {
                    int temp1 = arr[j];
                    int x2 = temp1 % x, y2 = temp1 / x;
                    if(x2 < x1 - 1 || x2 > x1 + 1 || y2 < y1 - 1 || y2 > y1 + 1)
                    {
                        m[x2][y2].bomb = true;
                        temp++;
                        for (int i = x2 - 1; i <= x2 + 1; i++)
                            for(int j = y2 - 1; j <= y2 + 1; j++)
                                if (valid(i, j))
                                    m[i][j].num++; //增加周围8个方格数字
                    }
                    j++;
                }
            }
            fankai(x1, y1, x1, y1);
        }
        else if (pressl && pressr) //左右键同时按住时松开任意一键，即翻开已翻开数字周围8格
        {
            if (m[x1][y1].fankai)
            {
                int temp = 0;
                for(int i = x1 - 1; i <= x1 + 1; i++)
                    for(int j = y1 - 1; j <= y1 + 1; j++)
                        if (valid(i, j) && m[i][j].biaoji)
                            temp++;
                if (temp == m[x1][y1].num) fankai8(x1, y1, x1, y1); //周围标记雷数等于数字时才翻开
            }
        }
        if (over) gameover(); //判断游戏结束
    }
    if(event->button() == Qt::LeftButton) //分别松开左右键
        pressl = false;
    if(event->button() == Qt::RightButton)
        pressr = false;
    if(pressl && !pressr) protect = true;
    else protect = false; //设置是否保护左键
    update();
}

void MainWindow::setmap(int x0, int y0, int l0) //初始化雷区
{
    if(label[2]->text() == "难度：自定义") //判断是否将自定义打勾
    {
        clrnd();
        ui->action_10->setChecked(true);
    }
    else ui->action_10->setChecked(false);
    delete m; //删除原有雷区
    x = x0;
    y = y0;
    lei = l0;
    maxsize = s_w * 0.95 / (x + 4);
    if (maxsize > s_h * 0.9 / (y + 4)) maxsize = s_h * 0.9 / (y + 4);
    minsize = maxsize * 0.3;
    if (minsize < 10) minsize = 10; //根据屏幕大小和雷区大小，设置最大与最小尺寸
    on_action_5_triggered(); //设置雷区后默认将方格大小设为中
    m = new grid* [x]; //生成方格
    for (int i = 0; i < x; i++)
        m[i] = new grid[y];
    on_action_3_triggered(); //重玩
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(dialog, SIGNAL(getm(int, int, int)), this, SLOT(setm(int, int, int))); //连接四个传参数的信号与槽
    connect(this, SIGNAL(getm(int, int, int)), dialog, SLOT(setm(int, int, int)));
    connect(this, SIGNAL(getsz(int, int, int)), dialog_2, SLOT(setsz(int, int, int)));
    connect(dialog_2, SIGNAL(getsz(int)), this, SLOT(setsz(int)));
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect r0 = screen->availableGeometry();
    s_w = r0.width(); //获取屏幕宽度与高度
    s_h = r0.height();
    timer->stop();
    connect(timer, SIGNAL(timeout()), this, SLOT(_timer())); //连接计时器相应事件
    for (int i = 0; i < 4; i++)
        label[i] = new QLabel(this);
    label[3]->setText("模式：正常"); //目前只有正常模式
    on_action_8_triggered(); //初始难度设为高级
    ui->statusBar->addWidget(label[0]); //状态栏添加标签
    ui->statusBar->addWidget(label[1]);
    ui->statusBar->addPermanentWidget(label[2]);
    ui->statusBar->addPermanentWidget(label[3]);
    srand(unsigned(time(0))); //初始化随机数种子
    random(0, 1);
}

void MainWindow::showstat() //更新时间与剩余雷数的状态
{
    if (hpre || Win || over) //高精度显示，赢或输后强制高精度显示
        label[0]->setText("时间：" + QString::number(double(t) / 1000, 'f', 2) + "秒");
    else label[0]->setText("时间：" + QString::number(t / 1000) + "秒");
    label[1]->setText("雷数：" + QString::number(r));
}

void MainWindow::_timer()
{
    if (!f1) return;
    t = QDateTime::currentDateTime().toMSecsSinceEpoch() - t0.toMSecsSinceEpoch();
    //用时为系统时间减去初始时间，而不让t逐增，防止因为程序卡顿导致计时不准
    if (Win || over) f1 = false;
    showstat();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_3_triggered() //重玩
{
    grid temp;
    for (int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
            m[i][j] = temp; //初始化所有方格
    game = over = Win = false; //初始化所有状态
    pressl = pressr = protect = false;
    f1 = false;
    count = t = 0;
    r = lei;
    timer->stop();
    showstat();
    update();
}

void MainWindow::on_action_4_triggered() //设置尺寸为小
{
    dist = maxsize * 0.4;
    update();
    clrdx();
    ui->action_4->setChecked(true);
}

void MainWindow::on_action_5_triggered() //设置尺寸为中
{
    dist = maxsize * 0.6;
    update();
    clrdx();
    ui->action_5->setChecked(true);
}

void MainWindow::on_action_6_triggered() //设置尺寸为大
{
    dist = maxsize * 0.9;
    update();
    clrdx();
    ui->action_6->setChecked(true);
}

void MainWindow::on_action_1_triggered() //自定义尺寸
{
    emit getsz(dist, minsize, maxsize); //发送当前尺寸以及允许的最大最小尺寸
    dialog_2->setModal(true);
    dialog_2->show(); //设为模态并弹出自定义对话框
}

void MainWindow::on_action_2_triggered() //高精度时间
{
    hpre = !hpre;
    if (hpre) timer->setInterval(10);
    else timer->setInterval(100); //设为100毫秒是为了防止因不准确而跳秒
    _timer();
    showstat();
}

void MainWindow::on_action_8_triggered() //设置难度为高级
{
    setmap(30, 16, 99);
    label[2]->setText("难度：高级");
    clrnd();
    ui->action_8->setChecked(true);
}

void MainWindow::on_action_7_triggered() //设置难度为中级
{
    setmap(16, 16, 40);
    label[2]->setText("难度：中级");
    clrnd();
    ui->action_7->setChecked(true);
}

void MainWindow::on_action_triggered() //设置难度为初级
{
    setmap(9, 9, 10);
    label[2]->setText("难度：初级");
    clrnd();
    ui->action->setChecked(true);
}

void MainWindow::on_action_10_triggered() //自定义难度
{
    emit getm(x, y, lei); //发送当前雷区作为设置的默认值
    dialog->setModal(true);
    dialog->show();
    if(label[2]->text() == "难度：自定义")
    {
        clrnd();
        ui->action_10->setChecked(true);
    }
    else ui->action_10->setChecked(false);
}

void MainWindow::setm(int x0, int y0, int l0) //自定义时设置雷区
{
    int maxs = s_w * 0.95 / (x0 + 4);
    if (maxs > s_h * 0.9 / (y0 + 4)) maxs = s_h * 0.9 / (y0 + 4);
    int mins = maxs * 0.3;
    if (mins < 10) mins = 10; //设置雷区前模拟最大与最小尺寸
    if (maxs < mins) //若最大尺寸小于最小尺寸，说明雷区过大
    {
        QMessageBox::warning(this, "警告", "雷区过大");
        return;
    }
    label[2]->setText("难度：自定义");
    setmap(x0, y0, l0);
}

void MainWindow::setsz(int sz) //自定义时设置尺寸
{
    if (sz) //若尺寸有效则设置
    {
        dist = sz;
        clrdx();
        ui->action_1->setChecked(true);
        update();
    }
    else if (ui->action_4->isChecked() || ui->action_5->isChecked() || ui->action_6->isChecked())
        ui->action_1->setChecked(false);
    else ui->action_1->setChecked(true); //根据当前状态判断是否将自定义打勾
}

void MainWindow::on_action_9_triggered() //退出游戏
{
    this->close();
}

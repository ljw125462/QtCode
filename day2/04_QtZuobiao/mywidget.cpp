#include "mywidget.h"
#include<QPushButton>
#include"mybutton.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    /*
    对于主窗口（父窗口），坐标系统相对于屏幕
    原点：相对于屏幕左上角
    x:向右递增
    y:向下递增
    */

    move(100,100);

    /*
    对于子窗口，坐标系统相对于妇女窗口
    原点：相对于父窗口白色区域左上角（不包括边框）
    x:向右递增
    y:向下递增
    */
    QPushButton *b1=new QPushButton(this);
    b1->move(100,100);
    b1->setText("111");
    b1->resize(100,100);

    QPushButton *b2=new QPushButton(b1);
    b2->move(0,0);
    b2->setText("555");
    b2->resize(50,50);

    MyButton *b3=new MyButton(this);
    b3->setText("123");

    //*指定父对象后 *直接或间接继承于QObject
    //子对象如果是动态分配空间new，不需要手动释放delete
    //系统会自动释放
}

MyWidget::~MyWidget()
{

}

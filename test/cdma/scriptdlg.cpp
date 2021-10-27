#include "scriptdlg.h"
#include <QGridLayout>
#include <QHBoxLayout>

scriptDlg::scriptDlg(QWidget *parent) : QDialog(parent)
{
    label0 = new QLabel;
    label0->setText("请输入SQL:");
    textEditSQL = new QTextEdit;

    okBtn = new QPushButton;
    okBtn->setText("执行");
    cancelBtn = new QPushButton;
    cancelBtn->setText("取消");

    QGridLayout *layout1 = new QGridLayout(this);
    layout1->addWidget(label0,0,0);
    layout1->addWidget(textEditSQL,0,1);

    QHBoxLayout *layout2 = new QHBoxLayout();

    layout2->addWidget(okBtn);
    layout2->addWidget(cancelBtn);
    layout1->addLayout(layout2,1,1);

}

void scriptDlg::okBtnOnClick()
{

}

void scriptDlg::cancelBtnOnClick()
{

}

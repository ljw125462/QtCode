/********************************************************************************
** Form generated from reading UI file 'stuinfoshowself.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUINFOSHOWSELF_H
#define UI_STUINFOSHOWSELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuInfoShowSelf
{
public:
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_age;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QLineEdit *lineEdit_sex;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_place;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_major;
    QPushButton *pushButton_back;

    void setupUi(QWidget *StuInfoShowSelf)
    {
        if (StuInfoShowSelf->objectName().isEmpty())
            StuInfoShowSelf->setObjectName(QString::fromUtf8("StuInfoShowSelf"));
        StuInfoShowSelf->resize(487, 310);
        widget_4 = new QWidget(StuInfoShowSelf);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(0, 0, 471, 267));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_id = new QLineEdit(frame);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_id);


        horizontalLayout_7->addWidget(frame);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_name = new QLineEdit(frame_2);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_name);


        horizontalLayout_7->addWidget(frame_2);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_9 = new QHBoxLayout(widget_2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        frame_3 = new QFrame(widget_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_age = new QLineEdit(frame_3);
        lineEdit_age->setObjectName(QString::fromUtf8("lineEdit_age"));
        lineEdit_age->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_age);


        horizontalLayout_9->addWidget(frame_3);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_8 = new QHBoxLayout(widget_3);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_8->addWidget(label_4);

        lineEdit_sex = new QLineEdit(widget_3);
        lineEdit_sex->setObjectName(QString::fromUtf8("lineEdit_sex"));
        lineEdit_sex->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_sex);


        horizontalLayout_9->addWidget(widget_3);


        verticalLayout->addWidget(widget_2);

        frame_4 = new QFrame(widget_4);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lineEdit_place = new QLineEdit(frame_4);
        lineEdit_place->setObjectName(QString::fromUtf8("lineEdit_place"));
        lineEdit_place->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_place);


        verticalLayout->addWidget(frame_4);

        frame_5 = new QFrame(widget_4);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(frame_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        lineEdit_major = new QLineEdit(frame_5);
        lineEdit_major->setObjectName(QString::fromUtf8("lineEdit_major"));
        lineEdit_major->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_major);


        verticalLayout->addWidget(frame_5);

        pushButton_back = new QPushButton(StuInfoShowSelf);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(340, 270, 93, 28));

        retranslateUi(StuInfoShowSelf);

        QMetaObject::connectSlotsByName(StuInfoShowSelf);
    } // setupUi

    void retranslateUi(QWidget *StuInfoShowSelf)
    {
        StuInfoShowSelf->setWindowTitle(QApplication::translate("StuInfoShowSelf", "Form", nullptr));
        label->setText(QApplication::translate("StuInfoShowSelf", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("StuInfoShowSelf", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_5->setText(QApplication::translate("StuInfoShowSelf", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_4->setText(QApplication::translate("StuInfoShowSelf", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_7->setText(QApplication::translate("StuInfoShowSelf", "\347\261\215\350\264\257\357\274\232", nullptr));
        label_8->setText(QApplication::translate("StuInfoShowSelf", "\344\270\223\344\270\232\357\274\232", nullptr));
        pushButton_back->setText(QApplication::translate("StuInfoShowSelf", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuInfoShowSelf: public Ui_StuInfoShowSelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUINFOSHOWSELF_H

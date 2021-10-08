/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *ButtonDel;
    QPushButton *ButtonSure;
    QPushButton *ButtonCancel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 40, 113, 20));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 121, 31));
        ButtonDel = new QPushButton(Widget);
        ButtonDel->setObjectName(QString::fromUtf8("ButtonDel"));
        ButtonDel->setGeometry(QRect(30, 90, 75, 23));
        ButtonSure = new QPushButton(Widget);
        ButtonSure->setObjectName(QString::fromUtf8("ButtonSure"));
        ButtonSure->setGeometry(QRect(140, 90, 75, 23));
        ButtonCancel = new QPushButton(Widget);
        ButtonCancel->setObjectName(QString::fromUtf8("ButtonCancel"));
        ButtonCancel->setGeometry(QRect(270, 90, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\344\275\240\350\246\201\345\210\240\351\231\244\347\232\204\345\220\215\345\255\227", nullptr));
        ButtonDel->setText(QApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        ButtonSure->setText(QApplication::translate("Widget", "\347\241\256\350\256\244\345\210\240\351\231\244", nullptr));
        ButtonCancel->setText(QApplication::translate("Widget", "\346\222\244\351\224\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

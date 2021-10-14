/********************************************************************************
** Form generated from reading UI file 'modifyadmpass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYADMPASS_H
#define UI_MODIFYADMPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyAdmPass
{
public:
    QWidget *widget_5;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_oldPass;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_newPass;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_againPass;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_back;
    QPushButton *pushButton_submit;

    void setupUi(QWidget *ModifyAdmPass)
    {
        if (ModifyAdmPass->objectName().isEmpty())
            ModifyAdmPass->setObjectName(QString::fromUtf8("ModifyAdmPass"));
        ModifyAdmPass->resize(500, 333);
        widget_5 = new QWidget(ModifyAdmPass);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(30, 40, 297, 241));
        verticalLayout = new QVBoxLayout(widget_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_oldPass = new QLineEdit(widget);
        lineEdit_oldPass->setObjectName(QString::fromUtf8("lineEdit_oldPass"));
        lineEdit_oldPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout->addWidget(lineEdit_oldPass);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_newPass = new QLineEdit(widget_2);
        lineEdit_newPass->setObjectName(QString::fromUtf8("lineEdit_newPass"));
        lineEdit_newPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_2->addWidget(lineEdit_newPass);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_againPass = new QLineEdit(widget_3);
        lineEdit_againPass->setObjectName(QString::fromUtf8("lineEdit_againPass"));
        lineEdit_againPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_3->addWidget(lineEdit_againPass);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_back = new QPushButton(widget_4);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));

        horizontalLayout_4->addWidget(pushButton_back);

        pushButton_submit = new QPushButton(widget_4);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));

        horizontalLayout_4->addWidget(pushButton_submit);


        verticalLayout->addWidget(widget_4);


        retranslateUi(ModifyAdmPass);

        QMetaObject::connectSlotsByName(ModifyAdmPass);
    } // setupUi

    void retranslateUi(QWidget *ModifyAdmPass)
    {
        ModifyAdmPass->setWindowTitle(QApplication::translate("ModifyAdmPass", "Form", nullptr));
        label->setText(QApplication::translate("ModifyAdmPass", "\345\210\235\345\247\213\345\257\206\347\240\201\357\274\232", nullptr));
        label_2->setText(QApplication::translate("ModifyAdmPass", "\346\226\260\346\224\271\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QApplication::translate("ModifyAdmPass", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_back->setText(QApplication::translate("ModifyAdmPass", "\350\277\224\345\233\236", nullptr));
        pushButton_submit->setText(QApplication::translate("ModifyAdmPass", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyAdmPass: public Ui_ModifyAdmPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYADMPASS_H

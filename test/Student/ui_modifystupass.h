/********************************************************************************
** Form generated from reading UI file 'modifystupass.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTUPASS_H
#define UI_MODIFYSTUPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyStuPass
{
public:
    QWidget *widget_5;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_stuid;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_sname;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_newPass;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_againPass;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QPushButton *pushButton_submit;

    void setupUi(QWidget *ModifyStuPass)
    {
        if (ModifyStuPass->objectName().isEmpty())
            ModifyStuPass->setObjectName(QStringLiteral("ModifyStuPass"));
        ModifyStuPass->resize(500, 333);
        widget_5 = new QWidget(ModifyStuPass);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(80, 20, 294, 281));
        verticalLayout = new QVBoxLayout(widget_5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_stuid = new QLineEdit(widget_2);
        lineEdit_stuid->setObjectName(QStringLiteral("lineEdit_stuid"));
        lineEdit_stuid->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(lineEdit_stuid);


        verticalLayout->addWidget(widget_2);

        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_sname = new QLineEdit(widget_6);
        lineEdit_sname->setObjectName(QStringLiteral("lineEdit_sname"));
        lineEdit_sname->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_sname);


        verticalLayout->addWidget(widget_6);

        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_newPass = new QLineEdit(widget_3);
        lineEdit_newPass->setObjectName(QStringLiteral("lineEdit_newPass"));
        lineEdit_newPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_3->addWidget(lineEdit_newPass);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit_againPass = new QLineEdit(widget_4);
        lineEdit_againPass->setObjectName(QStringLiteral("lineEdit_againPass"));
        lineEdit_againPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_4->addWidget(lineEdit_againPass);


        verticalLayout->addWidget(widget_4);

        widget = new QWidget(widget_5);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_back = new QPushButton(widget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        horizontalLayout->addWidget(pushButton_back);

        pushButton_submit = new QPushButton(widget);
        pushButton_submit->setObjectName(QStringLiteral("pushButton_submit"));

        horizontalLayout->addWidget(pushButton_submit);


        verticalLayout->addWidget(widget);


        retranslateUi(ModifyStuPass);

        QMetaObject::connectSlotsByName(ModifyStuPass);
    } // setupUi

    void retranslateUi(QWidget *ModifyStuPass)
    {
        ModifyStuPass->setWindowTitle(QApplication::translate("ModifyStuPass", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ModifyStuPass", "\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("ModifyStuPass", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("ModifyStuPass", "\346\226\260\346\224\271\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("ModifyStuPass", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("ModifyStuPass", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_submit->setText(QApplication::translate("ModifyStuPass", "\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ModifyStuPass: public Ui_ModifyStuPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTUPASS_H

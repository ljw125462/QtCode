/********************************************************************************
** Form generated from reading UI file 'logscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGSCREEN_H
#define UI_LOGSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogScreen
{
public:
    QWidget *centralWidget;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_log;
    QLabel *label_4;

    void setupUi(QMainWindow *LogScreen)
    {
        if (LogScreen->objectName().isEmpty())
            LogScreen->setObjectName(QString::fromUtf8("LogScreen"));
        LogScreen->resize(545, 362);
        centralWidget = new QWidget(LogScreen);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(210, 90, 267, 220));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_id = new QLineEdit(widget_2);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));

        horizontalLayout_2->addWidget(lineEdit_id);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_password = new QLineEdit(widget_3);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_password);


        verticalLayout->addWidget(widget_3);

        widget = new QWidget(widget_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);


        verticalLayout->addWidget(widget);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_clear = new QPushButton(widget_5);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));

        horizontalLayout_4->addWidget(pushButton_clear);

        pushButton_log = new QPushButton(widget_5);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));

        horizontalLayout_4->addWidget(pushButton_log);


        verticalLayout->addWidget(widget_5);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 10, 401, 51));
        LogScreen->setCentralWidget(centralWidget);

        retranslateUi(LogScreen);

        QMetaObject::connectSlotsByName(LogScreen);
    } // setupUi

    void retranslateUi(QMainWindow *LogScreen)
    {
        LogScreen->setWindowTitle(QApplication::translate("LogScreen", "LogScreen", nullptr));
        label->setText(QApplication::translate("LogScreen", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("LogScreen", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QApplication::translate("LogScreen", "\350\272\253\344\273\275\357\274\232", nullptr));
        radioButton->setText(QApplication::translate("LogScreen", "\347\256\241\347\220\206\345\221\230", nullptr));
        radioButton_2->setText(QApplication::translate("LogScreen", "\345\255\246\347\224\237", nullptr));
        pushButton_clear->setText(QApplication::translate("LogScreen", "\346\270\205\347\251\272", nullptr));
        pushButton_log->setText(QApplication::translate("LogScreen", "\347\231\273\345\275\225", nullptr));
        label_4->setText(QApplication::translate("LogScreen", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogScreen: public Ui_LogScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGSCREEN_H

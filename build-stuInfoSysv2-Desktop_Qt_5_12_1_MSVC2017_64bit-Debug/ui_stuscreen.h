/********************************************************************************
** Form generated from reading UI file 'stuscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUSCREEN_H
#define UI_STUSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuScreen
{
public:
    QLineEdit *lineEdit_welcome;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_selectInfo;
    QPushButton *pushButton_modifyPass;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_selectGrade;
    QPushButton *pushButton_back;

    void setupUi(QWidget *StuScreen)
    {
        if (StuScreen->objectName().isEmpty())
            StuScreen->setObjectName(QString::fromUtf8("StuScreen"));
        StuScreen->resize(505, 317);
        lineEdit_welcome = new QLineEdit(StuScreen);
        lineEdit_welcome->setObjectName(QString::fromUtf8("lineEdit_welcome"));
        lineEdit_welcome->setGeometry(QRect(80, 40, 331, 41));
        lineEdit_welcome->setLayoutDirection(Qt::LeftToRight);
        lineEdit_welcome->setStyleSheet(QString::fromUtf8(""));
        lineEdit_welcome->setFrame(false);
        lineEdit_welcome->setCursorPosition(0);
        lineEdit_welcome->setReadOnly(true);
        widget_3 = new QWidget(StuScreen);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(70, 130, 351, 141));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_selectInfo = new QPushButton(widget);
        pushButton_selectInfo->setObjectName(QString::fromUtf8("pushButton_selectInfo"));

        horizontalLayout->addWidget(pushButton_selectInfo);

        pushButton_modifyPass = new QPushButton(widget);
        pushButton_modifyPass->setObjectName(QString::fromUtf8("pushButton_modifyPass"));

        horizontalLayout->addWidget(pushButton_modifyPass);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_selectGrade = new QPushButton(widget_2);
        pushButton_selectGrade->setObjectName(QString::fromUtf8("pushButton_selectGrade"));

        horizontalLayout_2->addWidget(pushButton_selectGrade);

        pushButton_back = new QPushButton(widget_2);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));

        horizontalLayout_2->addWidget(pushButton_back);


        verticalLayout->addWidget(widget_2);


        retranslateUi(StuScreen);

        QMetaObject::connectSlotsByName(StuScreen);
    } // setupUi

    void retranslateUi(QWidget *StuScreen)
    {
        StuScreen->setWindowTitle(QApplication::translate("StuScreen", "Form", nullptr));
        lineEdit_welcome->setText(QString());
        pushButton_selectInfo->setText(QApplication::translate("StuScreen", "\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        pushButton_modifyPass->setText(QApplication::translate("StuScreen", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        pushButton_selectGrade->setText(QApplication::translate("StuScreen", "\346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
        pushButton_back->setText(QApplication::translate("StuScreen", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuScreen: public Ui_StuScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUSCREEN_H

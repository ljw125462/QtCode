/********************************************************************************
** Form generated from reading UI file 'selectgradeself.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTGRADESELF_H
#define UI_SELECTGRADESELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectGradeSelf
{
public:
    QPushButton *pushButton_back;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *SelectGradeSelf)
    {
        if (SelectGradeSelf->objectName().isEmpty())
            SelectGradeSelf->setObjectName(QString::fromUtf8("SelectGradeSelf"));
        SelectGradeSelf->resize(500, 333);
        pushButton_back = new QPushButton(SelectGradeSelf);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(340, 280, 93, 28));
        widget_3 = new QWidget(SelectGradeSelf);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(50, 20, 331, 241));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(widget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_4);


        horizontalLayout->addWidget(widget_2);


        retranslateUi(SelectGradeSelf);

        QMetaObject::connectSlotsByName(SelectGradeSelf);
    } // setupUi

    void retranslateUi(QWidget *SelectGradeSelf)
    {
        SelectGradeSelf->setWindowTitle(QApplication::translate("SelectGradeSelf", "Form", nullptr));
        pushButton_back->setText(QApplication::translate("SelectGradeSelf", "\350\277\224\345\233\236", nullptr));
        label->setText(QApplication::translate("SelectGradeSelf", "\346\225\260\345\255\246\357\274\232", nullptr));
        label_2->setText(QApplication::translate("SelectGradeSelf", "\350\213\261\350\257\255\357\274\232", nullptr));
        label_3->setText(QApplication::translate("SelectGradeSelf", "C++\357\274\232", nullptr));
        label_4->setText(QApplication::translate("SelectGradeSelf", "\345\271\263\345\235\207\345\210\206\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectGradeSelf: public Ui_SelectGradeSelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTGRADESELF_H

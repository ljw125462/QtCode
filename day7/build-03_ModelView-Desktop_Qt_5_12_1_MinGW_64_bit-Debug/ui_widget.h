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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QPushButton *ButtonAdd;
    QPushButton *ButtonDelete;
    QPushButton *ButtonSure;
    QPushButton *ButtonFind;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QTableView *tableView;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(406, 335);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ButtonAdd = new QPushButton(Widget);
        ButtonAdd->setObjectName(QString::fromUtf8("ButtonAdd"));

        gridLayout->addWidget(ButtonAdd, 1, 0, 1, 1);

        ButtonDelete = new QPushButton(Widget);
        ButtonDelete->setObjectName(QString::fromUtf8("ButtonDelete"));

        gridLayout->addWidget(ButtonDelete, 1, 1, 1, 1);

        ButtonSure = new QPushButton(Widget);
        ButtonSure->setObjectName(QString::fromUtf8("ButtonSure"));

        gridLayout->addWidget(ButtonSure, 1, 2, 1, 2);

        ButtonFind = new QPushButton(Widget);
        ButtonFind->setObjectName(QString::fromUtf8("ButtonFind"));

        gridLayout->addWidget(ButtonFind, 1, 4, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 2);

        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 2, 3, 1, 2);

        tableView = new QTableView(Widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 5);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        ButtonAdd->setText(QApplication::translate("Widget", "\345\242\236\345\212\240", nullptr));
        ButtonDelete->setText(QApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        ButtonSure->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
        ButtonFind->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\346\237\245\346\211\276\347\232\204\344\272\272\357\274\232", nullptr));
        pushButton_5->setText(QApplication::translate("Widget", "\346\237\245\346\211\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

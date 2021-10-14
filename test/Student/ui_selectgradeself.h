/********************************************************************************
** Form generated from reading UI file 'selectgradeself.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTGRADESELF_H
#define UI_SELECTGRADESELF_H

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
            SelectGradeSelf->setObjectName(QStringLiteral("SelectGradeSelf"));
        SelectGradeSelf->resize(500, 333);
        pushButton_back = new QPushButton(SelectGradeSelf);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(340, 280, 93, 28));
        widget_3 = new QWidget(SelectGradeSelf);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(50, 20, 331, 241));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(widget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_4);


        horizontalLayout->addWidget(widget_2);


        retranslateUi(SelectGradeSelf);

        QMetaObject::connectSlotsByName(SelectGradeSelf);
    } // setupUi

    void retranslateUi(QWidget *SelectGradeSelf)
    {
        SelectGradeSelf->setWindowTitle(QApplication::translate("SelectGradeSelf", "Form", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("SelectGradeSelf", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("SelectGradeSelf", "\346\225\260\345\255\246\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("SelectGradeSelf", "\350\213\261\350\257\255\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("SelectGradeSelf", "C++\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("SelectGradeSelf", "\345\271\263\345\235\207\345\210\206\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelectGradeSelf: public Ui_SelectGradeSelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTGRADESELF_H

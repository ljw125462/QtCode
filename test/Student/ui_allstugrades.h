/********************************************************************************
** Form generated from reading UI file 'allstugrades.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLSTUGRADES_H
#define UI_ALLSTUGRADES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllStuGrades
{
public:
    QTableView *tableView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton_asc;
    QPushButton *pushButton_desc;
    QPushButton *pushButton_add;
    QPushButton *pushButton_select;
    QPushButton *pushButton_back;

    void setupUi(QWidget *AllStuGrades)
    {
        if (AllStuGrades->objectName().isEmpty())
            AllStuGrades->setObjectName(QStringLiteral("AllStuGrades"));
        AllStuGrades->resize(500, 333);
        tableView = new QTableView(AllStuGrades);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 371, 333));
        widget = new QWidget(AllStuGrades);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(370, 10, 115, 301));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        pushButton_asc = new QPushButton(widget);
        pushButton_asc->setObjectName(QStringLiteral("pushButton_asc"));

        verticalLayout->addWidget(pushButton_asc);

        pushButton_desc = new QPushButton(widget);
        pushButton_desc->setObjectName(QStringLiteral("pushButton_desc"));

        verticalLayout->addWidget(pushButton_desc);

        pushButton_add = new QPushButton(widget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        verticalLayout->addWidget(pushButton_add);

        pushButton_select = new QPushButton(widget);
        pushButton_select->setObjectName(QStringLiteral("pushButton_select"));

        verticalLayout->addWidget(pushButton_select);

        pushButton_back = new QPushButton(widget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        verticalLayout->addWidget(pushButton_back);


        retranslateUi(AllStuGrades);

        QMetaObject::connectSlotsByName(AllStuGrades);
    } // setupUi

    void retranslateUi(QWidget *AllStuGrades)
    {
        AllStuGrades->setWindowTitle(QApplication::translate("AllStuGrades", "Form", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AllStuGrades", "\345\255\246\345\217\267", Q_NULLPTR)
         << QApplication::translate("AllStuGrades", "\345\247\223\345\220\215", Q_NULLPTR)
         << QApplication::translate("AllStuGrades", "\346\225\260\345\255\246", Q_NULLPTR)
         << QApplication::translate("AllStuGrades", "\350\213\261\350\257\255", Q_NULLPTR)
         << QApplication::translate("AllStuGrades", "C++", Q_NULLPTR)
         << QApplication::translate("AllStuGrades", "\346\200\273\345\210\206", Q_NULLPTR)
        );
        pushButton_asc->setText(QApplication::translate("AllStuGrades", "\345\215\207\345\272\217", Q_NULLPTR));
        pushButton_desc->setText(QApplication::translate("AllStuGrades", "\351\231\215\345\272\217", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("AllStuGrades", "\346\267\273\345\212\240\346\210\220\347\273\251", Q_NULLPTR));
        pushButton_select->setText(QApplication::translate("AllStuGrades", "\345\210\267\346\226\260", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("AllStuGrades", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AllStuGrades: public Ui_AllStuGrades {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLSTUGRADES_H

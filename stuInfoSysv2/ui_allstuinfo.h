/********************************************************************************
** Form generated from reading UI file 'allstuinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLSTUINFO_H
#define UI_ALLSTUINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllStuInfo
{
public:
    QTableView *tableView;
    QWidget *widget_btn;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_add;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_asc;
    QPushButton *pushButton_desc;
    QPushButton *pushButton_back;

    void setupUi(QWidget *AllStuInfo)
    {
        if (AllStuInfo->objectName().isEmpty())
            AllStuInfo->setObjectName(QStringLiteral("AllStuInfo"));
        AllStuInfo->resize(839, 527);
        tableView = new QTableView(AllStuInfo);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 691, 531));
        widget_btn = new QWidget(AllStuInfo);
        widget_btn->setObjectName(QStringLiteral("widget_btn"));
        widget_btn->setGeometry(QRect(700, 10, 115, 511));
        verticalLayout = new QVBoxLayout(widget_btn);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_3 = new QPushButton(widget_btn);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_cancel = new QPushButton(widget_btn);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        verticalLayout->addWidget(pushButton_cancel);

        pushButton_add = new QPushButton(widget_btn);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        verticalLayout->addWidget(pushButton_add);

        pushButton_delete = new QPushButton(widget_btn);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        verticalLayout->addWidget(pushButton_delete);

        pushButton_asc = new QPushButton(widget_btn);
        pushButton_asc->setObjectName(QStringLiteral("pushButton_asc"));

        verticalLayout->addWidget(pushButton_asc);

        pushButton_desc = new QPushButton(widget_btn);
        pushButton_desc->setObjectName(QStringLiteral("pushButton_desc"));

        verticalLayout->addWidget(pushButton_desc);

        pushButton_back = new QPushButton(widget_btn);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        verticalLayout->addWidget(pushButton_back);


        retranslateUi(AllStuInfo);

        QMetaObject::connectSlotsByName(AllStuInfo);
    } // setupUi

    void retranslateUi(QWidget *AllStuInfo)
    {
        AllStuInfo->setWindowTitle(QApplication::translate("AllStuInfo", "Form", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AllStuInfo", "\347\241\256\350\256\244/\345\210\267\346\226\260", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("AllStuInfo", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("AllStuInfo", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("AllStuInfo", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_asc->setText(QApplication::translate("AllStuInfo", "\345\215\207\345\272\217", Q_NULLPTR));
        pushButton_desc->setText(QApplication::translate("AllStuInfo", "\351\231\215\345\272\217", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("AllStuInfo", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AllStuInfo: public Ui_AllStuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLSTUINFO_H

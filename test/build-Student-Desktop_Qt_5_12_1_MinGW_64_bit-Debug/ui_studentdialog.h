/********************************************************************************
** Form generated from reading UI file 'studentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDIALOG_H
#define UI_STUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_StudentDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *valueComboBox;
    QComboBox *condComboBox;
    QPushButton *SortButton;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *idEdit;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *scoreEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *insertButton;
    QPushButton *deleteButton;
    QPushButton *updateButton;

    void setupUi(QDialog *StudentDialog)
    {
        if (StudentDialog->objectName().isEmpty())
            StudentDialog->setObjectName(QString::fromUtf8("StudentDialog"));
        StudentDialog->resize(381, 461);
        gridLayout_2 = new QGridLayout(StudentDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        valueComboBox = new QComboBox(StudentDialog);
        valueComboBox->addItem(QString());
        valueComboBox->addItem(QString());
        valueComboBox->setObjectName(QString::fromUtf8("valueComboBox"));
        valueComboBox->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(valueComboBox);

        condComboBox = new QComboBox(StudentDialog);
        condComboBox->addItem(QString());
        condComboBox->addItem(QString());
        condComboBox->setObjectName(QString::fromUtf8("condComboBox"));
        condComboBox->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(condComboBox);

        SortButton = new QPushButton(StudentDialog);
        SortButton->setObjectName(QString::fromUtf8("SortButton"));
        SortButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(SortButton);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        tableView = new QTableView(StudentDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(StudentDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        idEdit = new QLineEdit(StudentDialog);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));
        idEdit->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(idEdit, 0, 1, 1, 1);

        label_2 = new QLabel(StudentDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        nameEdit = new QLineEdit(StudentDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        label_3 = new QLabel(StudentDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        scoreEdit = new QLineEdit(StudentDialog);
        scoreEdit->setObjectName(QString::fromUtf8("scoreEdit"));
        scoreEdit->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(scoreEdit, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        insertButton = new QPushButton(StudentDialog);
        insertButton->setObjectName(QString::fromUtf8("insertButton"));
        insertButton->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(insertButton);

        deleteButton = new QPushButton(StudentDialog);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(deleteButton);

        updateButton = new QPushButton(StudentDialog);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(updateButton);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 1);


        retranslateUi(StudentDialog);

        QMetaObject::connectSlotsByName(StudentDialog);
    } // setupUi

    void retranslateUi(QDialog *StudentDialog)
    {
        StudentDialog->setWindowTitle(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        valueComboBox->setItemText(0, QApplication::translate("StudentDialog", "ID", nullptr));
        valueComboBox->setItemText(1, QApplication::translate("StudentDialog", "Score", nullptr));

        condComboBox->setItemText(0, QApplication::translate("StudentDialog", "\345\215\207\345\272\217", nullptr));
        condComboBox->setItemText(1, QApplication::translate("StudentDialog", "\351\231\215\345\272\217", nullptr));

        SortButton->setText(QApplication::translate("StudentDialog", "\346\216\222\345\272\217", nullptr));
        label->setText(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\346\210\220\347\273\251\357\274\232", nullptr));
        insertButton->setText(QApplication::translate("StudentDialog", "\346\217\222\345\205\245", nullptr));
        deleteButton->setText(QApplication::translate("StudentDialog", "\345\210\240\351\231\244", nullptr));
        updateButton->setText(QApplication::translate("StudentDialog", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentDialog: public Ui_StudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDIALOG_H

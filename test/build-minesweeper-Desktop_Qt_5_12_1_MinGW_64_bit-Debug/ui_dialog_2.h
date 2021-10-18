/********************************************************************************
** Form generated from reading UI file 'dialog_2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_2_H
#define UI_DIALOG_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog_2
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QDialog *Dialog_2)
    {
        if (Dialog_2->objectName().isEmpty())
            Dialog_2->setObjectName(QString::fromUtf8("Dialog_2"));
        Dialog_2->resize(270, 181);
        pushButton_2 = new QPushButton(Dialog_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 110, 75, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(12);
        pushButton_2->setFont(font);
        pushButton_2->setAutoDefault(false);
        pushButton = new QPushButton(Dialog_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 110, 75, 31));
        pushButton->setFont(font);
        spinBox = new QSpinBox(Dialog_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(170, 40, 61, 31));
        spinBox->setFont(font);
        label = new QLabel(Dialog_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 111, 31));
        label->setFont(font);

        retranslateUi(Dialog_2);

        QMetaObject::connectSlotsByName(Dialog_2);
    } // setupUi

    void retranslateUi(QDialog *Dialog_2)
    {
        Dialog_2->setWindowTitle(QApplication::translate("Dialog_2", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog_2", "\345\217\226\346\266\210", nullptr));
        pushButton->setText(QApplication::translate("Dialog_2", "\347\241\256\345\256\232", nullptr));
        label->setText(QApplication::translate("Dialog_2", "\350\256\276\347\275\256\346\226\271\346\240\274\345\244\247\345\260\217\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_2: public Ui_Dialog_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_2_H

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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog_2
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *Dialog_2)
    {
        if (Dialog_2->objectName().isEmpty())
            Dialog_2->setObjectName(QString::fromUtf8("Dialog_2"));
        Dialog_2->resize(296, 238);
        gridLayout = new QGridLayout(Dialog_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Dialog_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(Dialog_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(spinBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(Dialog_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setPointSize(15);
        pushButton->setFont(font1);

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(Dialog_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(Dialog_2);

        QMetaObject::connectSlotsByName(Dialog_2);
    } // setupUi

    void retranslateUi(QDialog *Dialog_2)
    {
        Dialog_2->setWindowTitle(QApplication::translate("Dialog_2", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog_2", "\350\256\276\347\275\256\346\226\271\346\240\274\345\244\247\345\260\217\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("Dialog_2", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog_2", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_2: public Ui_Dialog_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_2_H

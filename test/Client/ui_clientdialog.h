/********************************************************************************
** Form generated from reading UI file 'clientdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTDIALOG_H
#define UI_CLIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ClientDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *serverIpEdit;
    QSpacerItem *verticalSpacer_4;
    QPushButton *connectButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLineEdit *messageEdit;
    QPushButton *sendButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *userNameEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *serverPortEdit;

    void setupUi(QDialog *ClientDialog)
    {
        if (ClientDialog->objectName().isEmpty())
            ClientDialog->setObjectName(QString::fromUtf8("ClientDialog"));
        ClientDialog->resize(400, 453);
        gridLayout = new QGridLayout(ClientDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        listWidget = new QListWidget(ClientDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(125, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 8, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ClientDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        serverIpEdit = new QLineEdit(ClientDialog);
        serverIpEdit->setObjectName(QString::fromUtf8("serverIpEdit"));
        serverIpEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(serverIpEdit);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 3);

        verticalSpacer_4 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 6, 1, 1, 1);

        connectButton = new QPushButton(ClientDialog);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setPointSize(16);
        connectButton->setFont(font1);

        gridLayout->addWidget(connectButton, 8, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(126, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        messageEdit = new QLineEdit(ClientDialog);
        messageEdit->setObjectName(QString::fromUtf8("messageEdit"));

        horizontalLayout->addWidget(messageEdit);

        sendButton = new QPushButton(ClientDialog);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setEnabled(false);
        QFont font2;
        font2.setPointSize(20);
        sendButton->setFont(font2);

        horizontalLayout->addWidget(sendButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(ClientDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        userNameEdit = new QLineEdit(ClientDialog);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));
        userNameEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(userNameEdit);


        gridLayout->addLayout(horizontalLayout_4, 7, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(ClientDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        serverPortEdit = new QLineEdit(ClientDialog);
        serverPortEdit->setObjectName(QString::fromUtf8("serverPortEdit"));
        serverPortEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(serverPortEdit);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 3);


        retranslateUi(ClientDialog);

        QMetaObject::connectSlotsByName(ClientDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientDialog)
    {
        ClientDialog->setWindowTitle(QApplication::translate("ClientDialog", "\350\201\212\345\244\251\345\256\244\345\256\242\346\210\267\347\253\257", nullptr));
        label->setText(QApplication::translate("ClientDialog", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", nullptr));
        serverIpEdit->setText(QApplication::translate("ClientDialog", "127.0.0.1", nullptr));
        connectButton->setText(QApplication::translate("ClientDialog", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        sendButton->setText(QApplication::translate("ClientDialog", "\345\217\221\351\200\201", nullptr));
        label_3->setText(QApplication::translate("ClientDialog", "\350\201\212\345\244\251\345\256\244\346\230\265\347\247\260\357\274\232", nullptr));
        userNameEdit->setText(QApplication::translate("ClientDialog", "\351\233\267\347\202\256", nullptr));
        label_2->setText(QApplication::translate("ClientDialog", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", nullptr));
        serverPortEdit->setText(QApplication::translate("ClientDialog", "8080", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientDialog: public Ui_ClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTDIALOG_H

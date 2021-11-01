/********************************************************************************
** Form generated from reading UI file 'chessform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESSFORM_H
#define UI_CHESSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChessForm
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *lbl1;
    QLCDNumber *lcdNumber1;
    QGridLayout *gridLayout1;
    QFrame *frame_2;
    QLabel *lbl2;
    QLCDNumber *lcdNumber2;
    QFrame *frame_3;
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_pvp;
    QPushButton *btn_pve;
    QPushButton *btn_nvn;

    void setupUi(QWidget *ChessForm)
    {
        if (ChessForm->objectName().isEmpty())
            ChessForm->setObjectName(QString::fromUtf8("ChessForm"));
        ChessForm->resize(750, 596);
        gridLayout = new QGridLayout(ChessForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(ChessForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(130, 500));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lbl1 = new QLabel(frame);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setGeometry(QRect(30, 30, 60, 60));
        lcdNumber1 = new QLCDNumber(frame);
        lcdNumber1->setObjectName(QString::fromUtf8("lcdNumber1"));
        lcdNumber1->setGeometry(QRect(30, 110, 91, 81));
        lcdNumber1->setDigitCount(2);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));

        gridLayout->addLayout(gridLayout1, 0, 1, 1, 1);

        frame_2 = new QFrame(ChessForm);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMaximumSize(QSize(130, 500));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lbl2 = new QLabel(frame_2);
        lbl2->setObjectName(QString::fromUtf8("lbl2"));
        lbl2->setGeometry(QRect(30, 30, 60, 60));
        lcdNumber2 = new QLCDNumber(frame_2);
        lcdNumber2->setObjectName(QString::fromUtf8("lcdNumber2"));
        lcdNumber2->setGeometry(QRect(30, 110, 91, 81));
        lcdNumber2->setDigitCount(2);

        gridLayout->addWidget(frame_2, 0, 2, 1, 1);

        frame_3 = new QFrame(ChessForm);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMaximumSize(QSize(16777215, 120));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        comboBox = new QComboBox(frame_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 50, 121, 41));
        layoutWidget = new QWidget(frame_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(350, 50, 334, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_pvp = new QPushButton(layoutWidget);
        btn_pvp->setObjectName(QString::fromUtf8("btn_pvp"));
        QFont font;
        font.setPointSize(17);
        btn_pvp->setFont(font);

        horizontalLayout->addWidget(btn_pvp);

        btn_pve = new QPushButton(layoutWidget);
        btn_pve->setObjectName(QString::fromUtf8("btn_pve"));
        btn_pve->setFont(font);

        horizontalLayout->addWidget(btn_pve);

        btn_nvn = new QPushButton(layoutWidget);
        btn_nvn->setObjectName(QString::fromUtf8("btn_nvn"));
        btn_nvn->setFont(font);

        horizontalLayout->addWidget(btn_nvn);


        gridLayout->addWidget(frame_3, 1, 0, 1, 3);


        retranslateUi(ChessForm);

        QMetaObject::connectSlotsByName(ChessForm);
    } // setupUi

    void retranslateUi(QWidget *ChessForm)
    {
        ChessForm->setWindowTitle(QApplication::translate("ChessForm", "Form", nullptr));
        lbl1->setText(QApplication::translate("ChessForm", "TextLabel", nullptr));
        lbl2->setText(QApplication::translate("ChessForm", "TextLabel", nullptr));
        btn_pvp->setText(QApplication::translate("ChessForm", "\344\272\272\344\272\272\345\257\271\346\210\230", nullptr));
        btn_pve->setText(QApplication::translate("ChessForm", "\344\272\272\346\234\272\345\257\271\346\210\230", nullptr));
        btn_nvn->setText(QApplication::translate("ChessForm", "\347\275\221\347\273\234\345\257\271\346\210\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChessForm: public Ui_ChessForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESSFORM_H

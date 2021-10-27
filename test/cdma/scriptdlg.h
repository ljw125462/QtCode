#ifndef SCRIPTDLG_H
#define SCRIPTDLG_H

#include <QWidget>
#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>

class scriptDlg : public QDialog
{
    Q_OBJECT
public:
    explicit scriptDlg(QWidget *parent = nullptr);
    QString SQL;
    bool isok;

signals:

public slots:

private:
    QLabel *label0;
    QTextEdit *textEditSQL;

    QPushButton *okBtn;
    QPushButton *cancelBtn;

private slots:
    void okBtnOnClick();
    void cancelBtnOnClick();
};

#endif // SCRIPTDLG_H

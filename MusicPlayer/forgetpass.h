#ifndef FORGETPASS_H
#define FORGETPASS_H

#include <QMainWindow>
#include "menu.h"
#include "recoverypass.h"

namespace Ui {
class ForgetPass;
}

class menu;
class RecoveryPass;

class ForgetPass : public QMainWindow
{
    Q_OBJECT

public:
    explicit ForgetPass(QWidget *parent = nullptr);
    ~ForgetPass();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_next_clicked();

private:
    Ui::ForgetPass *ui;
    menu *mymenu;
    RecoveryPass *recoverypage;
};

#endif // FORGETPASS_H

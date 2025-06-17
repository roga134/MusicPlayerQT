#ifndef FORGETPASS_H
#define FORGETPASS_H

#include <QMainWindow>
#include "menu.h"

namespace Ui {
class ForgetPass;
}

class menu;

class ForgetPass : public QMainWindow
{
    Q_OBJECT

public:
    explicit ForgetPass(QWidget *parent = nullptr);
    ~ForgetPass();
    void CheckPass();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_Done_clicked();

private:
    Ui::ForgetPass *ui;
    menu *mymenu;
};

#endif // FORGETPASS_H

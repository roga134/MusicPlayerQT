#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include "menu.h"

namespace Ui {
class SignUp;
}

class menu;

class SignUp : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();
    void WriteOnFile();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::SignUp *ui;
    menu *mymenu;
};

#endif // SIGNUP_H

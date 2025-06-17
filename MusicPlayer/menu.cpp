#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menu)
{

    ui->setupUi(this);
    this->setWindowTitle("Main Menu");

}
menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_SignUp_clicked()
{
    this->close();
    signup = new SignUp(this);
    signup->show();
}

void menu::on_pushButton_LogIn_clicked()
{
    this->close();
    login = new LogIn(this);
    login->show();
}

void menu::on_pushButton_ForPass_clicked()
{
    this->close();
    forgetpass = new ForgetPass(this);
    forgetpass->show();
}

void menu::on_pushButton_Exit_clicked()
{
    this->close();
}


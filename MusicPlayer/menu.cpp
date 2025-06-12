#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
    this->setWindowTitle("Main Menu");
    QFont font("Arial", 16, QFont::Bold);
    this->setFont(font);
    ui->MainLabel->setAlignment(Qt::AlignCenter);
    ui->MainLabel->setStyleSheet("font-size: 30px;");
    this->setStyleSheet("background-color: lightpink;");
    ui->MainLabel->setFont(font);
    ui->pushButton_Exit->setFont(font);
    ui->pushButton_LogIn->setFont(font);
    ui->pushButton_SignUp->setFont(font);
    ui->pushButton_ForPass->setFont(font);
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

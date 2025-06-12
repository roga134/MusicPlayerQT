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
    this->setStyleSheet("background-color: lightblue;");
    ui->MainLabel->setFont(font);
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

}

void menu::on_pushButton_ForPass_clicked()
{

}

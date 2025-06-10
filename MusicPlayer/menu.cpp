#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
    ui->MainLabel->setAlignment(Qt::AlignCenter);
    ui->MainLabel->setStyleSheet("font-size: 24px;");
    this->setStyleSheet("background-color: lightblue;");

}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_SignUp_clicked()
{

}

void menu::on_pushButton_LogIn_clicked()
{

}

void menu::on_pushButton_ForPass_clicked()
{

}

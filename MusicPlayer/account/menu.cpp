#include "menu.h"
#include "ui_menu.h"
#include <QPixmap>

menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    this->setWindowTitle("Main Menu");

    background = new QLabel(this);
    background->lower();
}

menu::~menu()
{
    delete ui;
}

void menu::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);

    if (background)
    {
        background->setGeometry(0, 0, this->width(), this->height());

        QPixmap pixmap(":/new/image1/image.jpg");
        background->setPixmap(pixmap.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    }
}

void menu::on_pushButton_exit_clicked()
{
    this->close();
}

void menu::on_pushButton_forPass_clicked()
{
    this->close();
    forgetpass = new ForgetPass(this);
    forgetpass->show();
}

void menu::on_pushButton_logIn_clicked()
{
    this->close();
    login = new LogIn(this);
    login->show();
}

void menu::on_pushButton_signUp_clicked()
{
    this->close();
    signup = new SignUp(this);
    signup->show();
}

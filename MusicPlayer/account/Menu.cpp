#include "Menu.h"
#include "ui_menu.h"
#include <QPixmap>
#include <QDebug>

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    this->setWindowTitle("Main Menu");

    background = new QLabel(this);
    background->lower();
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_SignUp_clicked()
{
    this->close();
    signup = new SignUp(this);
    signup->show();
}

void Menu::on_pushButton_LogIn_clicked()
{
    this->close();
    login = new LogIn(this);
    login->show();
}

void Menu::on_pushButton_ForPass_clicked()
{
    this->close();
    forgetpass = new ForgetPass(this);
    forgetpass->show();
}

void Menu::on_pushButton_Exit_clicked()
{
    this->close();
}

void Menu::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);

    if (background)
    {
        background->setGeometry(0, 0, this->width(), this->height());

        QPixmap pixmap(":/images/image.jpg");  // مسیر صحیح رو بذار
        if (pixmap.isNull())
            qDebug() << "Failed to load background image!";
        background->setPixmap(pixmap.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    }
}

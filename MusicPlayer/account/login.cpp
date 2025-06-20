#include "login.h"
#include "ui_login.h"
#include "encryption.h"
#include <QFont>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QCryptographicHash>
#include <QPixmap>

LogIn::LogIn(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);
    this->setWindowTitle("Log In Page");

    background = new QLabel(this);
    background->lower();    
    QFont font("Arial" , 12 , QFont::Bold);
    this->setFont(font);
    ui->pushButton_back->setFont(font);
    ui->pushButton_enter->setFont(font);

}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_pushButton_back_clicked()
{
    this->close();
    mymenu = new menu(this);
    mymenu->show();
}

void LogIn::on_pushButton_enter_clicked()
{
    QFile file("information.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "File Error", "Cannot open file.");
        return ;
    }

    QTextStream in(&file);
    char key = 0x5A;

    QString inputUsername = ui->lineEdit_username->text();
    QString inputPassHash = QCryptographicHash::hash(ui->lineEdit_pass->text().toUtf8(), QCryptographicHash::Sha256).toHex();

    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList fields = line.split(',');

        QString encryptedUsername = fields[2];
        QString decryptedUsername = simpleXOREncryptDecrypt(QByteArray::fromHex(encryptedUsername.toUtf8()), key);

        QString storedPassHash = fields[3];

        if (decryptedUsername == inputUsername && storedPassHash == inputPassHash)
        {
            QMessageBox::information(this, "Welcome", "Login Successful");
            file.close();
            this->close();
            return;
        }
    }

    file.close();
    QMessageBox::warning(this, "Login Failed", "Incorrect username or password.");
}

void LogIn::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);

    if (background)
    {
        background->setGeometry(0, 0, this->width(), this->height());

        QPixmap pixmap(":/new/image1/image.jpg");
        background->setPixmap(pixmap.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    }
}

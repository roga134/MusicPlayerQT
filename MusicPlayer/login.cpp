#include "login.h"
#include "ui_login.h"
#include "encryption.h"
#include <QFont>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QCryptographicHash>

LogIn::LogIn(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);
    this->setWindowTitle("Log In Page");

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

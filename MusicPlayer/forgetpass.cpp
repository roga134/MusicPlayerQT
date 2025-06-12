#include "forgetpass.h"
#include "ui_forgetpass.h"
#include "encryption.h"
#include <QFont>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QCryptographicHash>

ForgetPass::ForgetPass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ForgetPass)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: lightcyan;");
    this->setWindowTitle("Recovery Page");
    QFont font("Arial", 16, QFont::Bold);
    this->setFont(font);
    ui->label_secure->setFont(font);
    ui->label_username->setFont(font);
    ui->pushButton_back->setFont(font);
    ui->pushButton_next->setFont(font);
}

ForgetPass::~ForgetPass()
{
    delete ui;
}

void ForgetPass::on_pushButton_back_clicked()
{
    this->close();
    mymenu = new menu(this);
    mymenu->show();
}

void ForgetPass::on_pushButton_next_clicked()
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
    QString inputsecure = ui->lineEdit_secure->text();

    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList fields = line.split(',');

        QString encryptedUsername = fields[2];
        QString decryptedUsername = simpleXOREncryptDecrypt(QByteArray::fromHex(encryptedUsername.toUtf8()), key);

        QString encryptedSecure = fields[5];
        QString decryptedSecyre = simpleXOREncryptDecrypt(QByteArray::fromHex(encryptedSecure.toUtf8()), key);

        if (decryptedUsername == inputUsername && decryptedSecyre == inputsecure)
        {
            file.close();
            this->close();
            recoverypage = new RecoveryPass(this);
            recoverypage->show();
            return;
        }
    }

    file.close();
    QMessageBox::warning(this, "Login Failed", "Incorrect username or secure code.");
}

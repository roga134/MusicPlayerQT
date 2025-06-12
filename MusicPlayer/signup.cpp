#include "signup.h"
#include "ui_signup.h"
#include "encryption.h"
#include <QFont>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QCryptographicHash>

SignUp::SignUp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: lightcyan;");
    QFont font("Arial", 12, QFont::Bold);
    this->setWindowTitle("Sign Up Page");
    this->setFont(font);
    ui->pushButton_back->setFont(font);
    ui->pushButton_login->setFont(font);
    ui->label_FirstName->setFont(font);
    ui->label_LastName->setFont(font);
    ui->label_UserName->setFont(font);
    ui->label_Pass->setFont(font);
    ui->label_Email->setFont(font);
    ui->label_ConfPass->setFont(font);
    ui->label_SecureCode->setFont(font);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::WriteOnFile()
{
    QFile file("information.txt");

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
    {
        QMessageBox::warning(this, "File Error", "Cannot open file for writing.");
        return;
    }

    QTextStream out(&file);
    char key = 0x5A;

    out << simpleXOREncryptDecrypt(ui->lineEdit_FirstName->text(), key).toUtf8().toHex() << ","
        << simpleXOREncryptDecrypt(ui->lineEdit_LastName->text(), key).toUtf8().toHex()  << ","
        << simpleXOREncryptDecrypt(ui->lineEdit_UserName->text(), key).toUtf8().toHex()  << ","
        << QCryptographicHash::hash(ui->lineEdit_Pass->text().toUtf8(), QCryptographicHash::Sha256).toHex() << ","
        << simpleXOREncryptDecrypt(ui->lineEdit_Email->text(), key).toUtf8().toHex()     << ","
        << simpleXOREncryptDecrypt(ui->lineEdit_SecureCode->text(), key).toUtf8().toHex()<< "\n";

    file.close();
}

void SignUp::on_pushButton_back_clicked()
{
    this->close();
    mymenu = new menu(this);
    mymenu->show();
}

void SignUp::on_pushButton_login_clicked()
{
    if(ui->lineEdit_FirstName->text().isEmpty()||
       ui->lineEdit_LastName->text().isEmpty()||
       ui->lineEdit_Pass->text().isEmpty()||
       ui->lineEdit_Email->text().isEmpty()||
       ui->lineEdit_ConfPass->text().isEmpty()||
       ui->lineEdit_UserName->text().isEmpty()||
       ui->lineEdit_SecureCode->text().isEmpty())
    {
        QMessageBox::warning(this, "Information Error", "the form is not complete");
    }
    else if(ui->lineEdit_Pass->text() != ui->lineEdit_ConfPass->text())
    {
        QMessageBox::warning(this, "Password Error", "the password doesn't match");
    }
    else
    {
        this->close();
        login = new LogIn(this);
        login->show();
        WriteOnFile();
    }
}

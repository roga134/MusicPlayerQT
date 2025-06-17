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
    ui->pushButton_Done->setFont(font);
    ui->label_confpass->setFont(font);
    ui->label_pass->setFont(font);
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

void ForgetPass::on_pushButton_Done_clicked()
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
            CheckPass();
            return;
        }
    }

    file.close();
    QMessageBox::warning(this, "Login Failed", "Incorrect username or secure code.");
}

void ForgetPass::CheckPass()
{
    if (ui->lineEdit_Pass->text().isEmpty() || ui->lineEdit_confPass->text().isEmpty())
    {
        QMessageBox::warning(this, "Information Error", "The form is not complete");
        return;
    }

    if (ui->lineEdit_Pass->text() != ui->lineEdit_confPass->text())
    {
        QMessageBox::warning(this, "Password Error", "The password doesn't match");
        return;
    }

    QFile input_file("information.txt");
    QFile output_file("helper.txt");

    if (!input_file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "File Error", "Cannot open information file.");
        return;
    }

    if (!output_file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "File Error", "Cannot open helper file.");
        input_file.close();
        return;
    }

    QTextStream in(&input_file);
    QTextStream out(&output_file);
    char key = 0x5A;

    QString inputUsername = ui->lineEdit_username->text();
    QString inputSecure = ui->lineEdit_secure->text();

    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList fields = line.split(',');

        if (fields.size() < 6)
        {
            out << line << "\n";
            continue;
        }

        QString decryptedUsername = simpleXOREncryptDecrypt(QByteArray::fromHex(fields[2].toUtf8()), key);
        QString decryptedSecure = simpleXOREncryptDecrypt(QByteArray::fromHex(fields[5].toUtf8()), key);

        if (decryptedUsername == inputUsername && decryptedSecure == inputSecure)
        {
            QString newPassHash = QCryptographicHash::hash(ui->lineEdit_Pass->text().toUtf8(), QCryptographicHash::Sha256).toHex();
            fields[3] = newPassHash;
        }

        out << fields.join(',') << "\n";
    }

    input_file.close();
    output_file.close();

    input_file.remove();
    output_file.rename("information.txt");

    QMessageBox::information(this, "Password Reset", "Your password has been successfully reset!");
    this->close();
    mymenu = new menu(this);
    mymenu->show();
}

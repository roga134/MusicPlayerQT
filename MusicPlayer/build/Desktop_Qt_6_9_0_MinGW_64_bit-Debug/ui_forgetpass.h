/********************************************************************************
** Form generated from reading UI file 'forgetpass.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASS_H
#define UI_FORGETPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForgetPass
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_back;
    QPushButton *pushButton_Done;
    QLabel *label_confpass;
    QLabel *label_pass;
    QLabel *label_username;
    QLineEdit *lineEdit_confPass;
    QLineEdit *lineEdit_username;
    QLabel *label_secure;
    QLineEdit *lineEdit_secure;
    QLineEdit *lineEdit_Pass;

    void setupUi(QMainWindow *ForgetPass)
    {
        if (ForgetPass->objectName().isEmpty())
            ForgetPass->setObjectName("ForgetPass");
        ForgetPass->resize(784, 642);
        centralwidget = new QWidget(ForgetPass);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 781, 641));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/image1/image.jpg);"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(40, 440, 250, 40));
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 203, 203);"));
        pushButton_Done = new QPushButton(centralwidget);
        pushButton_Done->setObjectName("pushButton_Done");
        pushButton_Done->setGeometry(QRect(320, 440, 250, 40));
        pushButton_Done->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 203, 203);"));
        label_confpass = new QLabel(centralwidget);
        label_confpass->setObjectName("label_confpass");
        label_confpass->setGeometry(QRect(30, 250, 241, 51));
        label_pass = new QLabel(centralwidget);
        label_pass->setObjectName("label_pass");
        label_pass->setGeometry(QRect(30, 190, 161, 41));
        label_username = new QLabel(centralwidget);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(30, 80, 161, 41));
        lineEdit_confPass = new QLineEdit(centralwidget);
        lineEdit_confPass->setObjectName("lineEdit_confPass");
        lineEdit_confPass->setGeometry(QRect(270, 260, 180, 26));
        lineEdit_confPass->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(270, 90, 180, 26));
        label_secure = new QLabel(centralwidget);
        label_secure->setObjectName("label_secure");
        label_secure->setGeometry(QRect(30, 130, 181, 51));
        lineEdit_secure = new QLineEdit(centralwidget);
        lineEdit_secure->setObjectName("lineEdit_secure");
        lineEdit_secure->setGeometry(QRect(270, 150, 180, 26));
        lineEdit_Pass = new QLineEdit(centralwidget);
        lineEdit_Pass->setObjectName("lineEdit_Pass");
        lineEdit_Pass->setGeometry(QRect(270, 200, 180, 26));
        lineEdit_Pass->setEchoMode(QLineEdit::EchoMode::Password);
        ForgetPass->setCentralWidget(centralwidget);

        retranslateUi(ForgetPass);

        QMetaObject::connectSlotsByName(ForgetPass);
    } // setupUi

    void retranslateUi(QMainWindow *ForgetPass)
    {
        ForgetPass->setWindowTitle(QCoreApplication::translate("ForgetPass", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ForgetPass", "<html><head/><body><p><br/></p></body></html>", nullptr));
        pushButton_back->setText(QCoreApplication::translate("ForgetPass", "Back", nullptr));
        pushButton_Done->setText(QCoreApplication::translate("ForgetPass", "Done", nullptr));
        label_confpass->setText(QCoreApplication::translate("ForgetPass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Confirm password : </span></p></body></html>", nullptr));
        label_pass->setText(QCoreApplication::translate("ForgetPass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Password :</span></p></body></html>", nullptr));
        label_username->setText(QCoreApplication::translate("ForgetPass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">User name :</span></p></body></html>", nullptr));
        label_secure->setText(QCoreApplication::translate("ForgetPass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Your pet name :</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForgetPass: public Ui_ForgetPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASS_H

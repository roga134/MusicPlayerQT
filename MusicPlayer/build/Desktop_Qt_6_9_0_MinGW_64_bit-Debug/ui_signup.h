/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QWidget *centralwidget;
    QLabel *label_Email;
    QLabel *label_FirstName;
    QLabel *label_UserName;
    QLabel *label_Pass;
    QLabel *label_SecureCode;
    QLabel *label_ConfPass;
    QLineEdit *lineEdit_FirstName;
    QLineEdit *lineEdit_LastName;
    QLineEdit *lineEdit_UserName;
    QLineEdit *lineEdit_Email;
    QLineEdit *lineEdit_Pass;
    QLineEdit *lineEdit_ConfPass;
    QLineEdit *lineEdit_SecureCode;
    QPushButton *pushButton_back;
    QPushButton *pushButton_login;
    QLabel *label_8;
    QLabel *label_LastName;

    void setupUi(QMainWindow *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(789, 502);
        centralwidget = new QWidget(SignUp);
        centralwidget->setObjectName("centralwidget");
        label_Email = new QLabel(centralwidget);
        label_Email->setObjectName("label_Email");
        label_Email->setGeometry(QRect(20, 130, 101, 51));
        label_FirstName = new QLabel(centralwidget);
        label_FirstName->setObjectName("label_FirstName");
        label_FirstName->setGeometry(QRect(20, 20, 179, 26));
        label_UserName = new QLabel(centralwidget);
        label_UserName->setObjectName("label_UserName");
        label_UserName->setGeometry(QRect(20, 70, 180, 91));
        label_Pass = new QLabel(centralwidget);
        label_Pass->setObjectName("label_Pass");
        label_Pass->setGeometry(QRect(20, 170, 180, 49));
        label_SecureCode = new QLabel(centralwidget);
        label_SecureCode->setObjectName("label_SecureCode");
        label_SecureCode->setGeometry(QRect(20, 270, 161, 31));
        label_ConfPass = new QLabel(centralwidget);
        label_ConfPass->setObjectName("label_ConfPass");
        label_ConfPass->setGeometry(QRect(20, 220, 171, 31));
        lineEdit_FirstName = new QLineEdit(centralwidget);
        lineEdit_FirstName->setObjectName("lineEdit_FirstName");
        lineEdit_FirstName->setGeometry(QRect(190, 20, 321, 26));
        lineEdit_LastName = new QLineEdit(centralwidget);
        lineEdit_LastName->setObjectName("lineEdit_LastName");
        lineEdit_LastName->setGeometry(QRect(190, 60, 321, 26));
        lineEdit_UserName = new QLineEdit(centralwidget);
        lineEdit_UserName->setObjectName("lineEdit_UserName");
        lineEdit_UserName->setGeometry(QRect(190, 100, 321, 26));
        lineEdit_Email = new QLineEdit(centralwidget);
        lineEdit_Email->setObjectName("lineEdit_Email");
        lineEdit_Email->setGeometry(QRect(190, 140, 321, 26));
        lineEdit_Pass = new QLineEdit(centralwidget);
        lineEdit_Pass->setObjectName("lineEdit_Pass");
        lineEdit_Pass->setGeometry(QRect(190, 180, 321, 26));
        lineEdit_ConfPass = new QLineEdit(centralwidget);
        lineEdit_ConfPass->setObjectName("lineEdit_ConfPass");
        lineEdit_ConfPass->setGeometry(QRect(190, 230, 323, 26));
        lineEdit_SecureCode = new QLineEdit(centralwidget);
        lineEdit_SecureCode->setObjectName("lineEdit_SecureCode");
        lineEdit_SecureCode->setGeometry(QRect(190, 270, 321, 26));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(20, 390, 321, 40));
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 203, 203);"));
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(360, 390, 321, 40));
        pushButton_login->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 203, 203);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, -20, 791, 521));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/new/image1/image.jpg);"));
        label_LastName = new QLabel(centralwidget);
        label_LastName->setObjectName("label_LastName");
        label_LastName->setGeometry(QRect(20, 40, 419, 60));
        SignUp->setCentralWidget(centralwidget);
        label_8->raise();
        label_Email->raise();
        label_FirstName->raise();
        label_UserName->raise();
        label_Pass->raise();
        label_SecureCode->raise();
        label_ConfPass->raise();
        lineEdit_FirstName->raise();
        lineEdit_LastName->raise();
        lineEdit_UserName->raise();
        lineEdit_Email->raise();
        lineEdit_Pass->raise();
        lineEdit_ConfPass->raise();
        lineEdit_SecureCode->raise();
        pushButton_back->raise();
        pushButton_login->raise();
        label_FirstName->raise();
        label_SecureCode->raise();
        label_ConfPass->raise();
        label_Pass->raise();
        label_Email->raise();
        label_UserName->raise();
        lineEdit_SecureCode->raise();
        label_LastName->raise();
        lineEdit_ConfPass->raise();
        lineEdit_Pass->raise();
        lineEdit_Email->raise();
        lineEdit_UserName->raise();
        lineEdit_LastName->raise();
        lineEdit_FirstName->raise();

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QMainWindow *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "MainWindow", nullptr));
        label_Email->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">Email :</span></p></body></html>", nullptr));
        label_FirstName->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">FirstName :</span></p></body></html>", nullptr));
        label_UserName->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">UserName :</span></p></body></html>", nullptr));
        label_Pass->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">Password :</span></p></body></html>", nullptr));
        label_SecureCode->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">Your pet name :</span></p></body></html>", nullptr));
        label_ConfPass->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#ffffff;\">Confirm password :</span></p></body></html>", nullptr));
        pushButton_back->setText(QCoreApplication::translate("SignUp", "Back", nullptr));
        pushButton_login->setText(QCoreApplication::translate("SignUp", "Login", nullptr));
        label_8->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_LastName->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">LastName :</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H

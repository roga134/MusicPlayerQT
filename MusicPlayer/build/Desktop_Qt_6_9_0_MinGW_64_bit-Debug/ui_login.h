/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QWidget *centralwidget;
    QLabel *label_username;
    QLabel *label_pass;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_pass;
    QPushButton *pushButton_back;
    QPushButton *pushButton_enter;
    QLabel *label_3;

    void setupUi(QMainWindow *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName("LogIn");
        LogIn->resize(817, 598);
        LogIn->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(LogIn);
        centralwidget->setObjectName("centralwidget");
        label_username = new QLabel(centralwidget);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(50, 90, 171, 61));
        label_pass = new QLabel(centralwidget);
        label_pass->setObjectName("label_pass");
        label_pass->setGeometry(QRect(50, 160, 161, 61));
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(240, 110, 231, 31));
        lineEdit_pass = new QLineEdit(centralwidget);
        lineEdit_pass->setObjectName("lineEdit_pass");
        lineEdit_pass->setGeometry(QRect(240, 180, 231, 31));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(40, 350, 250, 40));
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 203, 203);"));
        pushButton_enter = new QPushButton(centralwidget);
        pushButton_enter->setObjectName("pushButton_enter");
        pushButton_enter->setGeometry(QRect(310, 350, 250, 40));
        pushButton_enter->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 203, 203);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 821, 601));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/image1/image.jpg);"));
        LogIn->setCentralWidget(centralwidget);
        label_3->raise();
        pushButton_back->raise();
        pushButton_enter->raise();
        label_username->raise();
        label_pass->raise();
        lineEdit_username->raise();
        lineEdit_pass->raise();
        pushButton_back->raise();
        pushButton_enter->raise();

        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QMainWindow *LogIn)
    {
        LogIn->setWindowTitle(QCoreApplication::translate("LogIn", "MainWindow", nullptr));
        label_username->setText(QCoreApplication::translate("LogIn", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Username :</span></p></body></html>", nullptr));
        label_pass->setText(QCoreApplication::translate("LogIn", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Password :</span></p></body></html>", nullptr));
        pushButton_back->setText(QCoreApplication::translate("LogIn", "Back", nullptr));
        pushButton_enter->setText(QCoreApplication::translate("LogIn", "Enter", nullptr));
        label_3->setText(QCoreApplication::translate("LogIn", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

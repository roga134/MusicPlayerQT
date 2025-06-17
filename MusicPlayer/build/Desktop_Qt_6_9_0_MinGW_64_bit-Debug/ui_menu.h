/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_LogIn;
    QPushButton *pushButton_SignUp;
    QPushButton *pushButton_ForPass;
    QPushButton *pushButton_Exit;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName("menu");
        menu->resize(799, 618);
        menu->setAutoFillBackground(true);
        menu->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(menu);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid gray;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, -10, 801, 631));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0);\n"
"border-image: url(:/new/image1/image.jpg);\n"
"border: none"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(31, 71, 441, 121));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0);\n"
"border: none\n"
"\n"
"\n"
""));
        pushButton_LogIn = new QPushButton(centralwidget);
        pushButton_LogIn->setObjectName("pushButton_LogIn");
        pushButton_LogIn->setGeometry(QRect(32, 291, 180, 60));
        pushButton_LogIn->setMinimumSize(QSize(180, 60));
        pushButton_LogIn->setMaximumSize(QSize(201, 16777215));
        pushButton_LogIn->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 203, 203);"));
        pushButton_SignUp = new QPushButton(centralwidget);
        pushButton_SignUp->setObjectName("pushButton_SignUp");
        pushButton_SignUp->setGeometry(QRect(223, 291, 180, 60));
        pushButton_SignUp->setMinimumSize(QSize(180, 60));
        pushButton_SignUp->setMaximumSize(QSize(201, 16777215));
        pushButton_SignUp->setSizeIncrement(QSize(180, 60));
        pushButton_SignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 203, 203);"));
        pushButton_ForPass = new QPushButton(centralwidget);
        pushButton_ForPass->setObjectName("pushButton_ForPass");
        pushButton_ForPass->setGeometry(QRect(32, 389, 371, 50));
        pushButton_ForPass->setMinimumSize(QSize(300, 50));
        pushButton_ForPass->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 203, 203);"));
        pushButton_Exit = new QPushButton(centralwidget);
        pushButton_Exit->setObjectName("pushButton_Exit");
        pushButton_Exit->setGeometry(QRect(32, 446, 371, 50));
        pushButton_Exit->setMinimumSize(QSize(300, 50));
        pushButton_Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 203, 203);"));
        menu->setCentralWidget(centralwidget);

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QMainWindow *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "menu", nullptr));
        label_2->setText(QCoreApplication::translate("menu", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("menu", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Welcome To The MusicPlayer</span></p></body></html>", nullptr));
        pushButton_LogIn->setText(QCoreApplication::translate("menu", "Login", nullptr));
        pushButton_SignUp->setText(QCoreApplication::translate("menu", "SignUp", nullptr));
        pushButton_ForPass->setText(QCoreApplication::translate("menu", "ForgetPassword", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("menu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H

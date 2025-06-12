/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_SecureCode;
    QLabel *label_ConfPass;
    QLineEdit *lineEdit_SecureCode;
    QLabel *label_Pass;
    QLabel *label_UserName;
    QLineEdit *lineEdit_ConfPass;
    QLineEdit *lineEdit_Email;
    QLineEdit *lineEdit_Pass;
    QLineEdit *lineEdit_LastName;
    QLabel *label_Email;
    QLineEdit *lineEdit_UserName;
    QLineEdit *lineEdit_FirstName;
    QLabel *label_LastName;
    QLabel *label_FirstName;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QPushButton *pushButton_login;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(800, 482);
        centralwidget = new QWidget(SignUp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_SecureCode = new QLabel(centralwidget);
        label_SecureCode->setObjectName(QString::fromUtf8("label_SecureCode"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_SecureCode->sizePolicy().hasHeightForWidth());
        label_SecureCode->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_SecureCode, 6, 0, 1, 1);

        label_ConfPass = new QLabel(centralwidget);
        label_ConfPass->setObjectName(QString::fromUtf8("label_ConfPass"));
        sizePolicy.setHeightForWidth(label_ConfPass->sizePolicy().hasHeightForWidth());
        label_ConfPass->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_ConfPass, 5, 0, 1, 1);

        lineEdit_SecureCode = new QLineEdit(centralwidget);
        lineEdit_SecureCode->setObjectName(QString::fromUtf8("lineEdit_SecureCode"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_SecureCode->sizePolicy().hasHeightForWidth());
        lineEdit_SecureCode->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit_SecureCode, 6, 1, 1, 1);

        label_Pass = new QLabel(centralwidget);
        label_Pass->setObjectName(QString::fromUtf8("label_Pass"));
        sizePolicy.setHeightForWidth(label_Pass->sizePolicy().hasHeightForWidth());
        label_Pass->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_Pass, 4, 0, 1, 1);

        label_UserName = new QLabel(centralwidget);
        label_UserName->setObjectName(QString::fromUtf8("label_UserName"));
        sizePolicy.setHeightForWidth(label_UserName->sizePolicy().hasHeightForWidth());
        label_UserName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_UserName, 2, 0, 1, 1);

        lineEdit_ConfPass = new QLineEdit(centralwidget);
        lineEdit_ConfPass->setObjectName(QString::fromUtf8("lineEdit_ConfPass"));
        sizePolicy1.setHeightForWidth(lineEdit_ConfPass->sizePolicy().hasHeightForWidth());
        lineEdit_ConfPass->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit_ConfPass, 5, 1, 1, 1);

        lineEdit_Email = new QLineEdit(centralwidget);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));
        sizePolicy1.setHeightForWidth(lineEdit_Email->sizePolicy().hasHeightForWidth());
        lineEdit_Email->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit_Email, 3, 1, 1, 1);

        lineEdit_Pass = new QLineEdit(centralwidget);
        lineEdit_Pass->setObjectName(QString::fromUtf8("lineEdit_Pass"));
        sizePolicy1.setHeightForWidth(lineEdit_Pass->sizePolicy().hasHeightForWidth());
        lineEdit_Pass->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit_Pass, 4, 1, 1, 1);

        lineEdit_LastName = new QLineEdit(centralwidget);
        lineEdit_LastName->setObjectName(QString::fromUtf8("lineEdit_LastName"));
        sizePolicy1.setHeightForWidth(lineEdit_LastName->sizePolicy().hasHeightForWidth());
        lineEdit_LastName->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit_LastName, 1, 1, 1, 1);

        label_Email = new QLabel(centralwidget);
        label_Email->setObjectName(QString::fromUtf8("label_Email"));
        sizePolicy.setHeightForWidth(label_Email->sizePolicy().hasHeightForWidth());
        label_Email->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_Email, 3, 0, 1, 1);

        lineEdit_UserName = new QLineEdit(centralwidget);
        lineEdit_UserName->setObjectName(QString::fromUtf8("lineEdit_UserName"));
        sizePolicy1.setHeightForWidth(lineEdit_UserName->sizePolicy().hasHeightForWidth());
        lineEdit_UserName->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit_UserName, 2, 1, 1, 1);

        lineEdit_FirstName = new QLineEdit(centralwidget);
        lineEdit_FirstName->setObjectName(QString::fromUtf8("lineEdit_FirstName"));
        sizePolicy1.setHeightForWidth(lineEdit_FirstName->sizePolicy().hasHeightForWidth());
        lineEdit_FirstName->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit_FirstName, 0, 1, 1, 1);

        label_LastName = new QLabel(centralwidget);
        label_LastName->setObjectName(QString::fromUtf8("label_LastName"));
        sizePolicy.setHeightForWidth(label_LastName->sizePolicy().hasHeightForWidth());
        label_LastName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_LastName, 1, 0, 1, 1);

        label_FirstName = new QLabel(centralwidget);
        label_FirstName->setObjectName(QString::fromUtf8("label_FirstName"));
        sizePolicy.setHeightForWidth(label_FirstName->sizePolicy().hasHeightForWidth());
        label_FirstName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_FirstName, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));

        horizontalLayout->addWidget(pushButton_back);

        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));

        horizontalLayout->addWidget(pushButton_login);


        verticalLayout->addLayout(horizontalLayout);

        SignUp->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SignUp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SignUp->setStatusBar(statusbar);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QMainWindow *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "MainWindow", nullptr));
        label_SecureCode->setText(QCoreApplication::translate("SignUp", "Your pet name", nullptr));
        label_ConfPass->setText(QCoreApplication::translate("SignUp", "Confirm password", nullptr));
        label_Pass->setText(QCoreApplication::translate("SignUp", "Password", nullptr));
        label_UserName->setText(QCoreApplication::translate("SignUp", "User name", nullptr));
        label_Email->setText(QCoreApplication::translate("SignUp", "Email", nullptr));
        label_LastName->setText(QCoreApplication::translate("SignUp", "Last name", nullptr));
        label_FirstName->setText(QCoreApplication::translate("SignUp", "First name", nullptr));
        pushButton_back->setText(QCoreApplication::translate("SignUp", "Back", nullptr));
        pushButton_login->setText(QCoreApplication::translate("SignUp", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H

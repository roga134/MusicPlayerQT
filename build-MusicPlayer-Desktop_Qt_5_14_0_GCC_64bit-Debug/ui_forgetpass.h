/********************************************************************************
** Form generated from reading UI file 'forgetpass.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASS_H
#define UI_FORGETPASS_H

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

class Ui_ForgetPass
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_secure;
    QLabel *label_username;
    QLineEdit *lineEdit_secure;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QPushButton *pushButton_next;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ForgetPass)
    {
        if (ForgetPass->objectName().isEmpty())
            ForgetPass->setObjectName(QString::fromUtf8("ForgetPass"));
        ForgetPass->resize(800, 185);
        centralwidget = new QWidget(ForgetPass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_secure = new QLabel(centralwidget);
        label_secure->setObjectName(QString::fromUtf8("label_secure"));

        gridLayout->addWidget(label_secure, 0, 0, 1, 1);

        label_username = new QLabel(centralwidget);
        label_username->setObjectName(QString::fromUtf8("label_username"));

        gridLayout->addWidget(label_username, 1, 0, 1, 1);

        lineEdit_secure = new QLineEdit(centralwidget);
        lineEdit_secure->setObjectName(QString::fromUtf8("lineEdit_secure"));

        gridLayout->addWidget(lineEdit_secure, 0, 1, 1, 1);

        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        gridLayout->addWidget(lineEdit_username, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));

        horizontalLayout->addWidget(pushButton_back);

        pushButton_next = new QPushButton(centralwidget);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));

        horizontalLayout->addWidget(pushButton_next);


        verticalLayout->addLayout(horizontalLayout);

        ForgetPass->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ForgetPass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ForgetPass->setStatusBar(statusbar);

        retranslateUi(ForgetPass);

        QMetaObject::connectSlotsByName(ForgetPass);
    } // setupUi

    void retranslateUi(QMainWindow *ForgetPass)
    {
        ForgetPass->setWindowTitle(QCoreApplication::translate("ForgetPass", "MainWindow", nullptr));
        label_secure->setText(QCoreApplication::translate("ForgetPass", "Your pet name :", nullptr));
        label_username->setText(QCoreApplication::translate("ForgetPass", "User name :", nullptr));
        pushButton_back->setText(QCoreApplication::translate("ForgetPass", "Back", nullptr));
        pushButton_next->setText(QCoreApplication::translate("ForgetPass", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForgetPass: public Ui_ForgetPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASS_H

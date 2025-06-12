/********************************************************************************
** Form generated from reading UI file 'recoverypass.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOVERYPASS_H
#define UI_RECOVERYPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecoveryPass
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_pass;
    QLineEdit *lineEdit_pass;
    QLabel *label_confpass;
    QLineEdit *lineEdit_confpass;
    QPushButton *pushButton_done;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RecoveryPass)
    {
        if (RecoveryPass->objectName().isEmpty())
            RecoveryPass->setObjectName(QString::fromUtf8("RecoveryPass"));
        RecoveryPass->resize(800, 202);
        centralwidget = new QWidget(RecoveryPass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_pass = new QLabel(centralwidget);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));

        gridLayout->addWidget(label_pass, 0, 0, 1, 1);

        lineEdit_pass = new QLineEdit(centralwidget);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_pass, 0, 1, 1, 1);

        label_confpass = new QLabel(centralwidget);
        label_confpass->setObjectName(QString::fromUtf8("label_confpass"));

        gridLayout->addWidget(label_confpass, 1, 0, 1, 1);

        lineEdit_confpass = new QLineEdit(centralwidget);
        lineEdit_confpass->setObjectName(QString::fromUtf8("lineEdit_confpass"));
        lineEdit_confpass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_confpass, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButton_done = new QPushButton(centralwidget);
        pushButton_done->setObjectName(QString::fromUtf8("pushButton_done"));

        verticalLayout->addWidget(pushButton_done);

        RecoveryPass->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(RecoveryPass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RecoveryPass->setStatusBar(statusbar);

        retranslateUi(RecoveryPass);

        QMetaObject::connectSlotsByName(RecoveryPass);
    } // setupUi

    void retranslateUi(QMainWindow *RecoveryPass)
    {
        RecoveryPass->setWindowTitle(QCoreApplication::translate("RecoveryPass", "MainWindow", nullptr));
        label_pass->setText(QCoreApplication::translate("RecoveryPass", "Password :", nullptr));
        label_confpass->setText(QCoreApplication::translate("RecoveryPass", "Confirm password : ", nullptr));
        pushButton_done->setText(QCoreApplication::translate("RecoveryPass", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecoveryPass: public Ui_RecoveryPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOVERYPASS_H

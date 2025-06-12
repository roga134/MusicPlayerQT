/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *MainLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_SignUp;
    QPushButton *pushButton_LogIn;
    QPushButton *pushButton_ForPass;
    QPushButton *pushButton_Exit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(800, 600);
        centralwidget = new QWidget(menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        MainLabel = new QLabel(centralwidget);
        MainLabel->setObjectName(QString::fromUtf8("MainLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainLabel->sizePolicy().hasHeightForWidth());
        MainLabel->setSizePolicy(sizePolicy);
        MainLabel->setMinimumSize(QSize(0, 0));
        MainLabel->setBaseSize(QSize(0, 0));
        MainLabel->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainLabel->setFrameShadow(QFrame::Plain);
        MainLabel->setLineWidth(0);
        MainLabel->setTextFormat(Qt::PlainText);
        MainLabel->setScaledContents(false);
        MainLabel->setWordWrap(false);
        MainLabel->setIndent(0);

        verticalLayout->addWidget(MainLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_SignUp = new QPushButton(centralwidget);
        pushButton_SignUp->setObjectName(QString::fromUtf8("pushButton_SignUp"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_SignUp->sizePolicy().hasHeightForWidth());
        pushButton_SignUp->setSizePolicy(sizePolicy1);
        pushButton_SignUp->setMinimumSize(QSize(0, 300));
        pushButton_SignUp->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout->addWidget(pushButton_SignUp);

        pushButton_LogIn = new QPushButton(centralwidget);
        pushButton_LogIn->setObjectName(QString::fromUtf8("pushButton_LogIn"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(20);
        sizePolicy2.setHeightForWidth(pushButton_LogIn->sizePolicy().hasHeightForWidth());
        pushButton_LogIn->setSizePolicy(sizePolicy2);
        pushButton_LogIn->setMinimumSize(QSize(0, 300));
        pushButton_LogIn->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout->addWidget(pushButton_LogIn);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_ForPass = new QPushButton(centralwidget);
        pushButton_ForPass->setObjectName(QString::fromUtf8("pushButton_ForPass"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_ForPass->sizePolicy().hasHeightForWidth());
        pushButton_ForPass->setSizePolicy(sizePolicy3);
        pushButton_ForPass->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_ForPass->setCheckable(false);
        pushButton_ForPass->setChecked(false);
        pushButton_ForPass->setAutoRepeatDelay(307);
        pushButton_ForPass->setAutoDefault(false);
        pushButton_ForPass->setFlat(false);

        verticalLayout->addWidget(pushButton_ForPass);

        pushButton_Exit = new QPushButton(centralwidget);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        sizePolicy3.setHeightForWidth(pushButton_Exit->sizePolicy().hasHeightForWidth());
        pushButton_Exit->setSizePolicy(sizePolicy3);
        pushButton_Exit->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_Exit->setAutoDefault(false);
        pushButton_Exit->setFlat(false);

        verticalLayout->addWidget(pushButton_Exit);


        verticalLayout_2->addLayout(verticalLayout);

        menu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        menu->setStatusBar(statusbar);

        retranslateUi(menu);
        QObject::connect(pushButton_Exit, SIGNAL(clicked()), menu, SLOT(close()));

        pushButton_ForPass->setDefault(false);
        pushButton_Exit->setDefault(false);


        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QMainWindow *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "menu", nullptr));
        MainLabel->setText(QCoreApplication::translate("menu", "Hi, Welcome to my music player", nullptr));
        pushButton_SignUp->setText(QCoreApplication::translate("menu", "Sign up", nullptr));
        pushButton_LogIn->setText(QCoreApplication::translate("menu", "Log in", nullptr));
        pushButton_ForPass->setText(QCoreApplication::translate("menu", "Forget Password", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("menu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H

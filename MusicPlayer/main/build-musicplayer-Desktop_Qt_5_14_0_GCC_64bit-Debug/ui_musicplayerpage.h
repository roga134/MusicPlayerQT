/********************************************************************************
** Form generated from reading UI file 'musicplayerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAYERPAGE_H
#define UI_MUSICPLAYERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_musicplayerpage
{
public:
    QAction *actionopen_file;
    QAction *actionprevios_song;
    QAction *actionplay;
    QAction *actionnext_trak;
    QAction *actionexit;
    QAction *actionAdd_files;
    QAction *actionAdd_folder;
    QAction *actionDon_t_shuffel;
    QAction *actionshuffel_all;
    QAction *actionDon_t_repeat;
    QAction *actionrepeat_trak;
    QAction *actionadd_playlist;
    QAction *actionsave_playlist;
    QAction *actionload_playlist;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *ignore_label;
    QListWidget *listWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listSongs;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_4;
    QSlider *horizontalSlider_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QMenuBar *menubar;
    QMenu *menuMusic;
    QMenu *menuPlaylist;
    QMenu *menuShuffel_mode;
    QMenu *menuRepeat_mode;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *musicplayerpage)
    {
        if (musicplayerpage->objectName().isEmpty())
            musicplayerpage->setObjectName(QString::fromUtf8("musicplayerpage"));
        musicplayerpage->resize(1002, 600);
        actionopen_file = new QAction(musicplayerpage);
        actionopen_file->setObjectName(QString::fromUtf8("actionopen_file"));
        actionprevios_song = new QAction(musicplayerpage);
        actionprevios_song->setObjectName(QString::fromUtf8("actionprevios_song"));
        actionplay = new QAction(musicplayerpage);
        actionplay->setObjectName(QString::fromUtf8("actionplay"));
        actionnext_trak = new QAction(musicplayerpage);
        actionnext_trak->setObjectName(QString::fromUtf8("actionnext_trak"));
        actionexit = new QAction(musicplayerpage);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        actionAdd_files = new QAction(musicplayerpage);
        actionAdd_files->setObjectName(QString::fromUtf8("actionAdd_files"));
        actionAdd_folder = new QAction(musicplayerpage);
        actionAdd_folder->setObjectName(QString::fromUtf8("actionAdd_folder"));
        actionDon_t_shuffel = new QAction(musicplayerpage);
        actionDon_t_shuffel->setObjectName(QString::fromUtf8("actionDon_t_shuffel"));
        actionshuffel_all = new QAction(musicplayerpage);
        actionshuffel_all->setObjectName(QString::fromUtf8("actionshuffel_all"));
        actionDon_t_repeat = new QAction(musicplayerpage);
        actionDon_t_repeat->setObjectName(QString::fromUtf8("actionDon_t_repeat"));
        actionrepeat_trak = new QAction(musicplayerpage);
        actionrepeat_trak->setObjectName(QString::fromUtf8("actionrepeat_trak"));
        actionadd_playlist = new QAction(musicplayerpage);
        actionadd_playlist->setObjectName(QString::fromUtf8("actionadd_playlist"));
        actionsave_playlist = new QAction(musicplayerpage);
        actionsave_playlist->setObjectName(QString::fromUtf8("actionsave_playlist"));
        actionload_playlist = new QAction(musicplayerpage);
        actionload_playlist->setObjectName(QString::fromUtf8("actionload_playlist"));
        centralwidget = new QWidget(musicplayerpage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFlat(true);

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFlat(true);

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFlat(true);

        verticalLayout->addWidget(pushButton_4);

        ignore_label = new QLabel(centralwidget);
        ignore_label->setObjectName(QString::fromUtf8("ignore_label"));

        verticalLayout->addWidget(ignore_label);


        horizontalLayout->addLayout(verticalLayout);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);


        horizontalLayout_2->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(20, 16777215));
        pushButton_5->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(20, 16777215));
        pushButton_6->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMaximumSize(QSize(20, 16777215));
        pushButton_7->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_7);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listSongs = new QListWidget(tab);
        listSongs->setObjectName(QString::fromUtf8("listSongs"));

        verticalLayout_2->addWidget(listSongs);

        horizontalSlider = new QSlider(tab);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSlider_2 = new QSlider(tab);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_2);

        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_4->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        horizontalLayout_4->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        horizontalLayout_4->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        horizontalLayout_4->addWidget(pushButton_11);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());

        horizontalLayout_2->addWidget(tabWidget);

        musicplayerpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(musicplayerpage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1002, 24));
        menuMusic = new QMenu(menubar);
        menuMusic->setObjectName(QString::fromUtf8("menuMusic"));
        menuPlaylist = new QMenu(menubar);
        menuPlaylist->setObjectName(QString::fromUtf8("menuPlaylist"));
        menuShuffel_mode = new QMenu(menuPlaylist);
        menuShuffel_mode->setObjectName(QString::fromUtf8("menuShuffel_mode"));
        menuRepeat_mode = new QMenu(menuPlaylist);
        menuRepeat_mode->setObjectName(QString::fromUtf8("menuRepeat_mode"));
        musicplayerpage->setMenuBar(menubar);
        statusbar = new QStatusBar(musicplayerpage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        musicplayerpage->setStatusBar(statusbar);

        menubar->addAction(menuMusic->menuAction());
        menubar->addAction(menuPlaylist->menuAction());
        menuMusic->addAction(actionopen_file);
        menuMusic->addSeparator();
        menuMusic->addAction(actionprevios_song);
        menuMusic->addAction(actionplay);
        menuMusic->addAction(actionnext_trak);
        menuMusic->addSeparator();
        menuMusic->addAction(actionexit);
        menuPlaylist->addAction(actionAdd_files);
        menuPlaylist->addAction(actionAdd_folder);
        menuPlaylist->addSeparator();
        menuPlaylist->addAction(menuShuffel_mode->menuAction());
        menuPlaylist->addAction(menuRepeat_mode->menuAction());
        menuPlaylist->addSeparator();
        menuPlaylist->addAction(actionadd_playlist);
        menuPlaylist->addAction(actionsave_playlist);
        menuPlaylist->addAction(actionload_playlist);
        menuPlaylist->addSeparator();
        menuShuffel_mode->addAction(actionDon_t_shuffel);
        menuShuffel_mode->addAction(actionshuffel_all);
        menuRepeat_mode->addAction(actionDon_t_repeat);
        menuRepeat_mode->addAction(actionrepeat_trak);

        retranslateUi(musicplayerpage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(musicplayerpage);
    } // setupUi

    void retranslateUi(QMainWindow *musicplayerpage)
    {
        musicplayerpage->setWindowTitle(QCoreApplication::translate("musicplayerpage", "musicplayerpage", nullptr));
        actionopen_file->setText(QCoreApplication::translate("musicplayerpage", "open file", nullptr));
        actionprevios_song->setText(QCoreApplication::translate("musicplayerpage", "previous trak", nullptr));
        actionplay->setText(QCoreApplication::translate("musicplayerpage", "play", nullptr));
        actionnext_trak->setText(QCoreApplication::translate("musicplayerpage", "next trak", nullptr));
        actionexit->setText(QCoreApplication::translate("musicplayerpage", "exit", nullptr));
        actionAdd_files->setText(QCoreApplication::translate("musicplayerpage", "Add files ...", nullptr));
        actionAdd_folder->setText(QCoreApplication::translate("musicplayerpage", "Add folder ...", nullptr));
        actionDon_t_shuffel->setText(QCoreApplication::translate("musicplayerpage", "Don't shuffel", nullptr));
        actionshuffel_all->setText(QCoreApplication::translate("musicplayerpage", "shuffel all", nullptr));
        actionDon_t_repeat->setText(QCoreApplication::translate("musicplayerpage", "Don't repeat", nullptr));
        actionrepeat_trak->setText(QCoreApplication::translate("musicplayerpage", "repeat track", nullptr));
        actionadd_playlist->setText(QCoreApplication::translate("musicplayerpage", "add playlist", nullptr));
        actionsave_playlist->setText(QCoreApplication::translate("musicplayerpage", "save playlist", nullptr));
        actionload_playlist->setText(QCoreApplication::translate("musicplayerpage", "load playlist", nullptr));
        pushButton->setText(QCoreApplication::translate("musicplayerpage", "Files", nullptr));
        pushButton_3->setText(QCoreApplication::translate("musicplayerpage", "Devices", nullptr));
        pushButton_4->setText(QCoreApplication::translate("musicplayerpage", "internet", nullptr));
        ignore_label->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("musicplayerpage", "new playlist", nullptr));
        pushButton_6->setText(QCoreApplication::translate("musicplayerpage", "load playlist", nullptr));
        pushButton_7->setText(QCoreApplication::translate("musicplayerpage", "save playlist", nullptr));
        pushButton_8->setText(QCoreApplication::translate("musicplayerpage", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("musicplayerpage", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("musicplayerpage", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("musicplayerpage", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("musicplayerpage", "Tab 1", nullptr));
        menuMusic->setTitle(QCoreApplication::translate("musicplayerpage", "Music", nullptr));
        menuPlaylist->setTitle(QCoreApplication::translate("musicplayerpage", "Playlist", nullptr));
        menuShuffel_mode->setTitle(QCoreApplication::translate("musicplayerpage", "Shuffel mode", nullptr));
        menuRepeat_mode->setTitle(QCoreApplication::translate("musicplayerpage", "Repeat mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class musicplayerpage: public Ui_musicplayerpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYERPAGE_H

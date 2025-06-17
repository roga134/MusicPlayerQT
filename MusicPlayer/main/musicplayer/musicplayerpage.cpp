#include "musicplayerpage.h"
#include "ui_musicplayerpage.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QUrl>
#include <QDir>

musicplayerpage::musicplayerpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::musicplayerpage)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);

    connect(ui->actionopen_file, &QAction::triggered, this, &musicplayerpage::addFile);
    connect(ui->listSongs, &QListWidget::itemClicked, this, &musicplayerpage::playSelectedSong);
    connect(player, &QMediaPlayer::durationChanged, this, &musicplayerpage::onDurationChanged);
}

musicplayerpage::~musicplayerpage()
{
    delete ui;
}

void musicplayerpage::addFile()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                        "Add Music File",
                        QDir::homePath(),
                        "Audio Files (*.mp3 *.wav *.ogg)");

    if (!fileName.isEmpty()) {
        QString baseName = QFileInfo(fileName).fileName();

        if (!songMap.contains(baseName)) {
            songMap.insert(baseName, fileName);
            ui->listSongs->addItem(baseName);
        }
    }
}

void musicplayerpage::playSelectedSong()
{
    QListWidgetItem *item = ui->listSongs->currentItem();
    if (item) {
        QString baseName = item->text();
        QString filePath = songMap.value(baseName);

        player->setMedia(QUrl::fromLocalFile(filePath));
        player->play();

        ui->statusbar->showMessage("Playing: " + baseName);
    }
}

void musicplayerpage::onDurationChanged(qint64 duration)
{
    ui->statusbar->showMessage("Duration: " + QString::number(duration / 1000) + " sec");
}

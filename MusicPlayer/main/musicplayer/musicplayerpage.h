#ifndef MUSICPLAYERPAGE_H
#define MUSICPLAYERPAGE_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMap>

QT_BEGIN_NAMESPACE
namespace Ui { class musicplayerpage; }
QT_END_NAMESPACE

class musicplayerpage : public QMainWindow
{
    Q_OBJECT

public:
    musicplayerpage(QWidget *parent = nullptr);
    ~musicplayerpage();

private slots:
    void addFile();
    void playSelectedSong();
    void onDurationChanged(qint64 duration);

private:
    Ui::musicplayerpage *ui;
    QMediaPlayer *player;
    QMap<QString, QString> songMap;
};
#endif

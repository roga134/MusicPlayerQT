#ifndef MAINMUSICPLAYERPAGE_H
#define MAINMUSICPLAYERPAGE_H

#include <QMainWindow>

namespace Ui {
class MainMusicPlayerPage;
}

class MainMusicPlayerPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMusicPlayerPage(QWidget *parent = nullptr);
    ~MainMusicPlayerPage();

private:
    Ui::MainMusicPlayerPage *ui;
};

#endif // MAINMUSICPLAYERPAGE_H

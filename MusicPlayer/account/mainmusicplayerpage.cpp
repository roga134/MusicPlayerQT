#include "mainmusicplayerpage.h"
#include "ui_mainmusicplayerpage.h"

MainMusicPlayerPage::MainMusicPlayerPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMusicPlayerPage)
{
    ui->setupUi(this);
}

MainMusicPlayerPage::~MainMusicPlayerPage()
{
    delete ui;
}

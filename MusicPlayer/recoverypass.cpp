#include "recoverypass.h"
#include "ui_recoverypass.h"

RecoveryPass::RecoveryPass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RecoveryPass)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: lightcyan;");
    QFont font("Arial", 12, QFont::Bold);
    this->setWindowTitle("Recovery Page");
    this->setFont(font);
    ui->label_pass->setFont(font);
    ui->label_confpass->setFont(font);
    ui->pushButton_done->setFont(font);
}

RecoveryPass::~RecoveryPass()
{
    delete ui;
}

void RecoveryPass::on_pushButton_done_clicked()
{

}

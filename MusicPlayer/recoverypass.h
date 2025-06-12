#ifndef RECOVERYPASS_H
#define RECOVERYPASS_H

#include <QMainWindow>

namespace Ui {
class RecoveryPass;
}

class RecoveryPass : public QMainWindow
{
    Q_OBJECT

public:
    explicit RecoveryPass(QWidget *parent = nullptr);
    ~RecoveryPass();

private slots:
    void on_pushButton_done_clicked();

private:
    Ui::RecoveryPass *ui;
};

#endif // RECOVERYPASS_H

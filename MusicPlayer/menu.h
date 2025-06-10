#ifndef MENU_H
#define MENU_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class menu; }
QT_END_NAMESPACE

class menu : public QMainWindow
{
    Q_OBJECT

public:
    menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_pushButton_SignUp_clicked();

    void on_pushButton_LogIn_clicked();

    void on_pushButton_ForPass_clicked();

private:
    Ui::menu *ui;
};
#endif // MENU_H

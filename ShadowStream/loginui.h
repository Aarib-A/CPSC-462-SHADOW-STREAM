#ifndef LOGINUI_H
#define LOGINUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginUI;}
QT_END_NAMESPACE

class LoginUI : public QMainWindow
{
    Q_OBJECT

public:
//    explicit LoginUI(QWidget *parent = nullptr);
    LoginUI(QWidget *parent = nullptr);
    ~LoginUI();

private:
    Ui::LoginUI *ui;
};

#endif // LOGINUI_H

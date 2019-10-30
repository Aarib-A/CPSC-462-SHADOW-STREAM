#include "LoginUI.h"
#include "ui_loginui.h"

using namespace std;

LoginUI::LoginUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginUI)
{
    ui->setupUi(this);
}

LoginUI::~LoginUI()
{
    delete ui;
}



void LoginUI::on_AuthenticatBUTTON_clicked()
{
    QString userName = ui->userName_field->text();
    QString password = ui->password_field->text();
    printf("katzo");
}

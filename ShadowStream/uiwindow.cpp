#include "uiwindow.h"
#include "ui_uiwindow.h"

UIwindow::UIwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UIwindow)
{
    ui->setupUi(this);
}

UIwindow::~UIwindow()
{
    delete ui;
}


#include "uiwindow.h"
#include "loginui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    UIwindow w;
    LoginUI w;
    w.show();

    return a.exec();
}

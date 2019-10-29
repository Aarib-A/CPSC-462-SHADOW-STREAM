#include "uiwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UIwindow w;
    w.show();
    return a.exec();
}

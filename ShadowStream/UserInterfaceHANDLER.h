#ifndef USERINTERFACEHANDLER_H
#define USERINTERFACEHANDLER_H

//#include "string.h"
#include <QApplication>
//using namespace std;
#include "AdminSessionHANDLER.h"
//using namespace QString;

class UserInterfaceHandler
{
public:
    UserInterfaceHandler();

    ~UserInterfaceHandler();

    void Login(QString userName, QString password);
//    {
//        AdminSessionHANDLER::
//    }
};

#endif // USERINTERFACEHANDLER_H

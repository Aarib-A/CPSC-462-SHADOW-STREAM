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

    static void Login(QString userName, QString password);
//    {
////        AdminSessionHANDLER::
//    AdminSessionHANDLER::GetInstance()->login(userName,password);

//    }
};

#endif // USERINTERFACEHANDLER_H

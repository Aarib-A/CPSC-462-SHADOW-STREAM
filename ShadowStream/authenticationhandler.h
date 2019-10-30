#ifndef AUTHENTICATIONHANDLER_H
#define AUTHENTICATIONHANDLER_H

#include <QApplication>

class AuthenticationHANDLER
{
public:
    AuthenticationHANDLER();

    bool Login(QString User, QString Pass);
};

#endif // AUTHENTICATIONHANDLER_H

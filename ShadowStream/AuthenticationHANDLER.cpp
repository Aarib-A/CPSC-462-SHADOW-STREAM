#include "AuthenticationHANDLER.h"
#include <QApplication>


AuthenticationHANDLER::AuthenticationHANDLER()
{

}

bool AuthenticationHANDLER::Login(QString User, QString Pass)
{
    if(User == "George" && Pass == "Splooney")
    {return true;}
    else
    {return false;}
}

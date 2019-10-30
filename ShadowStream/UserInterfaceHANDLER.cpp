#include "UserInterfaceHANDLER.h"

UserInterfaceHandler::UserInterfaceHandler()
{


}

void UserInterfaceHandler::Login(QString userName, QString password){
    //depends on AdminsSessionHANDLER
    AdminSessionHANDLER::Login(userName, password);
}

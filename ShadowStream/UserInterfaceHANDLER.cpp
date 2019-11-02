#include "UserInterfaceHANDLER.h"
#include "AdminSessionHANDLER.h"

#include <iostream>


//UserInterfaceHandler::UserInterfaceHandler()
//{


//}

void UserInterfaceHandler::Login(QString userName, QString password){
    //depends on AdminsSessionHANDLER
//    AdminSessionHANDLER *ptr = AdminSessionHANDLER::GetInstance();
    AdminSessionHANDLER::GetInstance()->login(userName,password);

}

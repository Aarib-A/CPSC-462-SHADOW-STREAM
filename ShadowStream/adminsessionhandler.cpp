#include "AdminSessionHANDLER.h"
#include "UserInterfaceHANDLER.h"
//#include "uiwindow.h"
#include "AuthenticationHANDLER.h"
#include "MonitorMODEsessionHANDLER.h"
#include <QApplication>
#include <QMessageBox>



//AdminSessionHANDLER::AdminSessionHANDLER()
//{

//}


QList<QString> AdminSessionHANDLER::RetrieveChannels()
{

//        MonitorMODEsessionHANDLER Loader;
//        Loader.RetrieveChannels();

    MonitorMODEsessionHANDLER *ptr = MonitorMODEsessionHANDLER::GetInstance();
    return ptr->RetrieveChannels();
}

void AdminSessionHANDLER::SelectChannel(QString cname)
{

}

void AdminSessionHANDLER::SelectVideo(QString vname)
{

}

void AdminSessionHANDLER::DeleteVideo(QString vname)
{

}

void AdminSessionHANDLER::DeleteChannel(QString cname)
{

}

bool AdminSessionHANDLER::login(QString User, QString Pass)
{
    bool isAdmin;

    AuthenticationHANDLER handler;

    isAdmin = handler.Login(User,Pass);

    if(isAdmin )
    {
       // RetrieveChannels();
        QMessageBox Msgbox;
        Msgbox.setText("You do have an Account");
        Msgbox.exec();
    }
    else
    {
       QMessageBox Msgbox;
       Msgbox.setText("You do not have an Account");
       Msgbox.exec();
       exit(1);

    }

    return true;
}

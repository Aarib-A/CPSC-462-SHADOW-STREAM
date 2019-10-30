#include "AdminSessionHANDLER.h"
#include "userinterfacehandler.h"
#include "uiwindow.h"
#include "AuthenticationHANDLER.h"
//#include "MonitorMODEsessionHANDLER.h"
#include <QApplication>
#include <QMessageBox>



AdminSessionHANDLER::AdminSessionHANDLER()
{

}


void AdminSessionHANDLER::RetrieveChannels()
{
/*




        MonitorMODEsessionHANDLER Loader;

        Loader.RetrieveChannels();



*/
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

    }

}

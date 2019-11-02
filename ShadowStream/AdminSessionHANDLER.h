#ifndef ADMINSESSIONHANDLER_H
#define ADMINSESSIONHANDLER_H
#include <QApplication>
#include <iostream>
#include <QList>

using namespace std;

class AdminSessionHANDLER
{


//public:
private:
    static AdminSessionHANDLER *ourSessionInstance;
    static bool instanceSet;
    AdminSessionHANDLER(){}

public:

    static AdminSessionHANDLER* GetInstance(){
        if(!instanceSet){
            ourSessionInstance = new AdminSessionHANDLER;
            instanceSet = true;
        }
        return ourSessionInstance;
    }

    bool login(QString User, QString Pass );

    QList<QString> RetrieveChannels();

    void SelectChannel(QString cname);

    void SelectVideo(QString vname);

    void DeleteVideo(QString vname);

    void DeleteChannel(QString cname);
};
AdminSessionHANDLER* AdminSessionHANDLER::ourSessionInstance = nullptr;
bool AdminSessionHANDLER::instanceSet = false;
//AdminSessionHANDLER::AdminSessionHANDLER(){}

#endif // ADMINSESSIONHANDLER_H

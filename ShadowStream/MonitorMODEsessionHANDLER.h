#ifndef MONITORMODESESSIONHANDLER_H
#define MONITORMODESESSIONHANDLER_H

#include "ChannelHANDLER.h"
#include <QApplication>
#include <QList>

class MonitorMODEsessionHANDLER // Planning to use it as a singleton pattern
{

private:

//    MonitorMODEsessionHANDLER *monitorSession = new MonitorMODEsessionHANDLER;
    static MonitorMODEsessionHANDLER *ourSessionInstance;

    QString channelBUFF;
    QList<channel> arrayListString;

    //constructor is private so it doesn't create is own instance until a method call GetINstacne()
    MonitorMODEsessionHANDLER();

public:

    static MonitorMODEsessionHANDLER* GetInstance(){
        if(!ourSessionInstance){ourSessionInstance = new MonitorMODEsessionHANDLER;}
        return ourSessionInstance;
    }
    ~MonitorMODEsessionHANDLER(){delete ourSessionInstance;}

    QList<QString> RetrieveChannels(); //Returns List of "channels"



};

MonitorMODEsessionHANDLER *MonitorMODEsessionHANDLER::ourSessionInstance = nullptr;

#endif // MONITORMODESESSIONHANDLER_H

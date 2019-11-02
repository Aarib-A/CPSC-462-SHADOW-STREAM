#include "MonitorMODEsessionHANDLER.h"

MonitorMODEsessionHANDLER::MonitorMODEsessionHANDLER()
{

}

QList<QString> MonitorMODEsessionHANDLER::RetrieveChannels(){
    arrayListString = ChannelHANDLER::RetrieveChannels();

    QList<QString> channelNames;
//        for(int i = 0; i < arrayListString.length(); i++){
//            channelNames.append(arrayListString[i].);
//        }
    return channelNames;
}

#ifndef CHANNELHANDLER_H
#define CHANNELHANDLER_H

#include <QApplication>

struct channel
{
//    static channel;

    QString channelName;
    int channelID;
    QList<QString> videoArrayString;
};




class ChannelHANDLER
{
private:
    static QList<channel> variable;
public:
    ChannelHANDLER();

    static QList<channel> RetrieveChannels(){return variable;}
};

ChannelHANDLER::ChannelHANDLER();

#endif // CHANNELHANDLER_H

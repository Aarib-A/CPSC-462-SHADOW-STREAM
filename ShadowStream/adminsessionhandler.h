#ifndef ADMINSESSIONHANDLER_H
#define ADMINSESSIONHANDLER_H
#include <QApplication>

class AdminSessionHANDLER
{
public:
    AdminSessionHANDLER();

    bool login(QString User, QString Pass );

    void RetrieveChannels();

    void SelectChannel(QString cname);

    void SelectVideo(QString vname);

    void DeleteVideo(QString vname);

    void DeleteChannel(QString cname);
};

#endif // ADMINSESSIONHANDLER_H

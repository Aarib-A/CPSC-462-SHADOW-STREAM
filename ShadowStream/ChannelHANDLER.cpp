#include "ChannelHANDLER.h"


ChannelHANDLER::ChannelHANDLER()
{
    channel *obj = new channel;
    obj->channelName = "xyz_channel";
    obj->channelID = 5555;
    obj->videoArrayString.append("zxy_video");
    obj->videoArrayString.append("123_video");

    variable.append(obj);


    obj = new channel;

    obj->channelName = "PBS";
    obj->channelID = 5555;
    obj->videoArrayString.append("Caillou");
    obj->videoArrayString.append("Clifford");

    variable.append(obj);

}

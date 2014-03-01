#ifndef _VOD_SERVER_HPP_
#define _VOD_SERVER_HPP_

#include "HTTPServer.hpp"

class VODServer
{
public:
    VODServer ( );
    virtual ~VODServer ( );

    bool start ( uint16_t port );

private:
    NetFlux::SocketIOEvent::Notifier * mpNotifier;
    HTTPServer * mpHttpServer;
};

#endif

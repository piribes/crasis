/*
 * Copyright (C) 2015 Giuseppe Roberti.
 *
 * See the LICENSE file for terms of use.
 */

#ifndef __Crasis__Samples__SampleEchoServer__
#define __Crasis__Samples__SampleEchoServer__

#include <iostream>
#include <memory>
#include <assert.h>

#include <nnxx/message.h>

#include "Crasis/Application.h"
#include "Crasis/Network/SocketListener.h"
#include "Crasis/Network/EventDispatcher.h"

using namespace Crasis;

class SampleEchoServer : public Application
{
public:
    SampleEchoServer (int argc, const char **argv) : Application (argc, argv) {};
    
    void initOptions ();
    int exec (variables_map vm);

private:
    void initContext ();
    void initSockets ();
    void loop ();
    
    Crasis::Network::EventDispatcher m_dispatcher;
};

#endif /* defined(__Crasis__Samples__SampleEchoServer__) */
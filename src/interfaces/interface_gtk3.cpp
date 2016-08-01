/*
 * interface_gtk3.cpp
 * This file is part of app_engine
 *
 * Copyright (C) 2016 Radosław Ulatowski <radekula@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Library General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>.
 */


#include "interface_gtk3.hpp"
#include <gtk/gtk.h>


namespace app_engine {
namespace interface {



InterfaceGtk3::InterfaceGtk3()
{
};


InterfaceGtk3::~InterfaceGtk3()
{
};


void InterfaceGtk3::init_thread()
{
};


int InterfaceGtk3::init(int argc, char *argv[])
{
    _interface_thread = std::thread(&InterfaceGtk3::_run, this, argc, argv);
};



void InterfaceGtk3::close()
{    
};


void InterfaceGtk3::_run(InterfaceGtk3 *iface, int argc, char *argv[])
{
    bool _thread_running = true;

    gtk_init(&argc, &argv);

    while(_thread_running)
    {
/*        auto command = iface->get_command();

        switch(command)
        {
            case ProcessCommand::FORCE_QUIT:
                _thread_running = false;
                break;
            case ProcessCommand::QUIT:
                break;
        }; */

        while(gtk_events_pending())
        {
            gtk_main_iteration();
        };
    };
};



};
};

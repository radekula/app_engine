/*
 * events_stream.cpp
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


#include "events_stream.hpp"


namespace app_engine {
namespace events {




EventsStream::EventsStream()
{
};




EventsStream::~EventsStream()
{
};



void EventsStream::set_name(std::string name)
{
    _name = name;
};



std::string EventsStream::get_name()
{
    return _name;
};




void EventsStream::register_handler(std::function<void(app_engine::events::Event&)> function)
{
    _handlers.push_back(function);
};




void EventsStream::unregister_handler(std::function<void(app_engine::events::Event&)> function)
{
/*    auto iterator = _handlers.begin();

    while(iterator != _handlers.end())
    {
        if((size_t)((*iterator).target()) == (size_t) function.target())
        {
            _handlers.erase(iterator);
            break;
        };
        iterator++;
    };*/
};




};
};


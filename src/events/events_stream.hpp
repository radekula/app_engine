/*
 * events_stream.hpp
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



#ifndef __APP_ENGINE_EVENTS_STREAM_HPP__
#define __APP_ENGINE_EVENTS_STREAM_HPP__


#include <string>
#include <vector>
#include <functional>
#include "events.hpp"


namespace app_engine {
namespace events {


class EventsStream
{
private:
    std::string _name;
    std::vector<std::function<void(app_engine::events::Event&)>> _handlers;
    
public:
    EventsStream();
    virtual ~EventsStream();

public:
    // Set Events stream name
    void set_name(std::string name);

    // Get Events stream name
    std::string get_name();

    // Register function to handle event. Multiple functions can be registered.
    void register_handler(std::function<void(app_engine::events::Event&)> function);

    // Unregister function from handle event.
    void unregister_handler(std::function<void(app_engine::events::Event&)> function);
};



};
};



#endif

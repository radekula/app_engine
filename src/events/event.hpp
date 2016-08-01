/*
 * event.hpp
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



#ifndef __APP_ENGINE_EVENT_HPP__
#define __APP_ENGINE_EVENT_HPP__


namespace app_engine {
namespace events {

typedef enum {
    GENERIC_EVENT = 0
} EventType;


class Event
{
private:
    EventType _type;
    void *_data;
    
public:
    Event();
    virtual ~Event();

public:
    // Get event type
    virtual EventType get_type();

    // Set event type
    virtual void set_type(EventType type);
};


};
};



#endif

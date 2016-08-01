/*
 * display.cpp
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



#include "display.hpp"


namespace app_engine {
namespace display {


Display::Display()
{
    _id = 0;
};


Display::~Display()
{
};


void Display::set_name(std::string name)
{
    _name = name;
};


std::string Display::get_name()
{
    return _name;
};


void Display::set_id(uint32_t id)
{
    _id = id;
};


uint32_t Display::get_id()
{
    return _id;
};


std::vector<app_engine::display::DisplayMode> Display::supported_modes()
{
    std::vector<app_engine::display::DisplayMode> modes;

    modes = _supported_modes;
    
    return modes;
};


void Display::set_mode(app_engine::display::DisplayMode mode)
{
    _current_mode = mode;
};


app_engine::display::DisplayMode Display::current_mode()
{
    return _current_mode;
};


};
};

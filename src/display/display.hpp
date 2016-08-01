/*
 * display.hpp
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


#ifndef __APP_ENGINE_DISPLAY_HPP__
#define __APP_ENGINE_DISPLAY_HPP__


#include <string>
#include <vector>


namespace app_engine {
namespace display {


struct DisplayMode{
    uint32_t res_x;
    uint32_t res_y;
    uint32_t depth;
    float refresh_rate;
};


class Display
{
private:
    uint32_t _id;
    std::string _name;

    std::vector<app_engine::display::DisplayMode> _supported_modes;
    app_engine::display::DisplayMode _current_mode;
    
public:
    Display();
    virtual ~Display();

public:
    void set_name(std::string name);
    std::string get_name();
    
    void set_id(uint32_t id);
    uint32_t get_id();

    std::vector<app_engine::display::DisplayMode> supported_modes();

    void set_mode(app_engine::display::DisplayMode mode);
    app_engine::display::DisplayMode current_mode();
};


};
};

#endif

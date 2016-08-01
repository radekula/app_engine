/*
 * window.hpp
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


#ifndef __APP_ENGINE_WINDOW_HPP__
#define __APP_ENGINE_WINDOW_HPP__


#include "display.hpp"


namespace app_engine {
namespace display {


class Window
{
private:
    app_engine::display::Display _display;

private:
    bool _fullscreen;
    uint32_t _width;
    uint32_t _height;
    bool _resizable;
    
public:
    Window();
    virtual ~Window();

public:
    void set_width(uint32_t width);
    uint32_t get_width();
    
    void set_height(uint32_t height);
    uint32_t get_height();
    
    void set_resolution(uint32_t width, uint32_t height);

    void set_fullscreen(bool fullscreen);
    bool get_fullscreen();
    
    void set_resizable(bool resizable);
    bool get_resizable();
    
    void set_display(app_engine::display::Display &display);
    app_engine::display::Display get_display();
};


};
};


#endif

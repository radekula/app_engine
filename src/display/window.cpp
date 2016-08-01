/*
 * window.cpp
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


#include "window.hpp"


namespace app_engine {
namespace display {


Window::Window()
{
};


Window::~Window()
{
};


void Window::set_width(uint32_t width)
{
    _width = width;
};


uint32_t Window::get_width()
{
    return _width;
};


void Window::set_height(uint32_t height)
{
    _height = height;
};


uint32_t Window::get_height()
{
    return _height;
};


void Window::set_resolution(uint32_t width, uint32_t height)
{
    _width = width;
    _height = height;
};


void Window::set_fullscreen(bool fullscreen)
{
    _fullscreen = fullscreen;
};


bool Window::get_fullscreen()
{
    return _fullscreen;
};


void Window::set_resizable(bool resizable)
{
    _resizable = resizable;
};


bool Window::get_resizable()
{
    return _resizable;
};


void Window::set_display(app_engine::display::Display &display)
{
    return;
};


app_engine::display::Display Window::get_display()
{
    return _display;
};


};
};

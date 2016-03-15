/*
 * application.cpp
 * This file is part of game_engine
 *
 * Copyright (C) 2016 Radosław Ulatowski
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



#include "global.hpp"
#include "application.hpp"




Application::Application()
{
    _name = APPLICATION_NAME_DEFAULT;
    _version = std::to_string(GAME_ENGINE_VER_MAJOR) 
                   + "." 
                   + std::to_string(GAME_ENGINE_VER_MINOR);

    _is_initialized = false; 
    _is_running = false;
    _is_paused = false;
};


Application::~Application()
{
};


void Application::set_app_name(std::string app_name)
{
    _name = app_namme;
};


std::string Application::get_app_name()
{
    return _name;
};


void Application::set_app_version(std::string app_version)
{
    _version = app_version;
};

    
std::string Application::get_app_version()
{
    return _version;
};


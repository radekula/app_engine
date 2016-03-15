/*
 * application.hpp
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




#ifndef __APP_ENGINE_APPLICATION_HPP__
#define __APP_ENGINE_APPLICATION_HPP__


#include <string>
#include "utils/config.hpp"


namespace app_engine
{
    
        
class Application
{
// Base information about application
private:
    std::string _name;
    std::string _version;

// Application configuration
private:
    Config _config;

// State of application
private:
    bool _is_initialized;
    bool _is_running;
    bool _is_paused;

public:
    Application();
    virtual ~Application();

// Basic seters and geters:
public:
    void set_app_name(std::string app_name);
    std::string get_app_name();

    void set_app_version(std::string app_version);
    std::string get_app_version();

// App running control functions:
public:
    // Initialize application
    int init(int argc, char *argv[]);

    // Start main application
    int run();

    // Pause application but not finish
    void pause();

    // Resume application after pause
    void resume();

    // Finish application
    void finish();
};


}


#endif

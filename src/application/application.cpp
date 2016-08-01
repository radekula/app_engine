/*
 * application.cpp
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


#include <algorithm>
#include "global/global.hpp"
#include "application/application.hpp"
#include "utils/parser_commandline.hpp"


namespace app_engine
{


Application::Application()
{
    _config.init_with_defaults();

    _name = _config.get_value("app.name");
    _version = _config.get_value("app.ver_major")
             + "."
             + _config.get_value("app.ver_minor");

    _is_initialized = false; 
    _is_running = false;
    _is_paused = false;

    app_engine::global::logger.log(std::string("Starting ") + _name + "... ", false);
    app_engine::global::logger.log(std::string("version ") + _version);
};


Application::~Application()
{
    finish();
};


void Application::set_app_name(std::string app_name)
{
    _name = app_name;
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


int Application::init(int argc, char *argv[])
{
    app_engine::global::logger.log("Initializing application... ", false);
        
    auto command_line = app_engine::parser::to_vector(argc, argv);

    auto iter = std::find(command_line.begin(), command_line.end(), std::string("--config"));
    if(iter != command_line.end() && ++iter != command_line.end())
        _config.from_file(*iter);
    else
        _config.from_file(std::string("./app_engine.config"));
    
    app_engine::global::logger.log("done");
};


int Application::run()
{
};


void Application::pause()
{
};


void Application::resume()
{
};


void Application::finish()
{
    app_engine::global::logger.log("Quiting... ", false);
    app_engine::global::logger.log("done");
};


};

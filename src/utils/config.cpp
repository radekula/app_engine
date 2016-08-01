/*
 * config.cpp
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



#include "utils/config.hpp"
#include "global/global.hpp"

namespace app_engine {
namespace config {



Config::Config()
{
};


Config::~Config()
{
};


void Config::from_file(std::string file)
{
};


void Config::to_file(std::string file)
{
};


void Config::set_value(std::string name, std::string value)
{
    _values[name] = value;
};


std::string Config::get_value(std::string name)
{
    std::string value;
    
    auto iter = _values.find(name);

    if(iter != _values.end())
        value = iter->second;

    return value;
};



void Config::init_with_defaults()
{
    set_value("app.name", APPLICATION_NAME_DEFAULT);
    set_value("app.ver_major", APP_ENGINE_VER_MAJOR);
    set_value("app.ver_minor", APP_ENGINE_VER_MINOR);

    set_value("window[0].fullscreen", DEFAULT_FULLSCREEN);
    set_value("window[0].width", DEFAULT_WIDTH);
    set_value("window[0].height", DEFAULT_HEIGHT);
    set_value("window[0].resizable", DEFAULT_RESIZABLE);
};


};
};

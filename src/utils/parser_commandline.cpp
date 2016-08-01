/*
 * parser_commandline.cpp
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



#include "parser_commandline.hpp"


namespace app_engine {
namespace parser {


std::vector<std::string> to_vector(int argc, char *argv[])
{
    std::vector<std::string> ret;

    for(int i = 1; i < argc; i++)
    {
        std::string command;
        command = argv[i];

        ret.push_back(command);
    };

    return ret;
};


};
};


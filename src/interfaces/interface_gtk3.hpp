/*
 * interface_gtk3.hpp
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


#ifndef __APP_ENGINE_INTERFACES_GTK3_HPP__
#define __APP_ENGINE_INTERFACES_GTK3_HPP__



#include <memory>
#include <functional>
#include <thread>


namespace app_engine {
namespace interface {


typedef enum {
    FORCE_QUIT,
    QUIT
} ProcessCommand;


class InterfaceGtk3
{
private:
    std::thread _interface_thread;

private:
    static void _run(InterfaceGtk3 *, int argc, char *argv[]);

private:
    // Start thread
    void init_thread();

public:
    InterfaceGtk3();
    ~InterfaceGtk3();

public:
    // Initialize interface
    int init(int argc, char *argv[]);

    // Close interface
    void close();
};



};
};


#endif

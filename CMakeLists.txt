cmake_minimum_required (VERSION 3.0)
project (app_engine)

set (app_engine_VERSION_MAJOR 0)
set (app_engine_VERSION_MINOR 1)

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")


if (${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} GREATER 3.0)
    if (NOT DEFINED CMAKE_CXX_STANDARD)
        set(CMAKE_CXX_STANDARD 14)
    endif ()
else ()
    set (CMAKE_CXX_FLAGS "-std=c++14")
endif ()

set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(PkgConfig REQUIRED)

find_package(Threads REQUIRED)
link_libraries(Threads::Threads)

#pkg_check_modules(JSONCPP REQUIRED jsoncpp)
#include_directories(${JSONCPP_INCLUDE_DIRS})
#link_directories(${JSONCPP_LIBRARY_DIRS})
#link_libraries(${JSONCPP_LIBRARIES})

pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
link_libraries(${GTK3_LIBRARIES})
add_definitions(${GTK3_CFLAGS_OTHER})

pkg_check_modules(UUID REQUIRED uuid)
include_directories(${UUID_INCLUDE_DIRS})
link_directories(${UUID_LIBRARY_DIRS})
link_libraries(${UUID_LIBRARIES})

include_directories (${CMAKE_CURRENT_LIST_DIR}/src/)

file (GLOB APP_ENGINE_SRC 
        "src/main/*.cpp"
        "src/global/*.cpp"
        "src/utils/*.cpp"
        "src/logging/*.cpp"
        "src/application/*.cpp"
        "src/display/*.cpp"
        "src/events/*.cpp"
        "src/interfaces/*.cpp")

add_executable (app_engine ${APP_ENGINE_SRC})

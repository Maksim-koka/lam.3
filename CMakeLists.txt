cmake_minimum_required(VERSION 3.26)
project(00p)

set(CMAKE_CXX_STANDARD 20)

add_executable(00p main.cpp
        Pistol.cpp
        Pistol.h
        Snip_rifle.cpp
        Snip_rifle.h
        Mach_gun.cpp
        Mach_gun.h)

//
// Created by Msksim on 29.02.2024.
//sxxxs
#include <iostream>

using namespace std;

#include "Pistol.h"
Pistol::Pistol(Pistol&& powerful) noexcept : Pistol(powerful){
    name = "Five-seven";
    weight = 2.25;
}


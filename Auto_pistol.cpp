//
// Created by Msksim on 04s.03.2024.
//
#include "auto_pistol.h"



Auto_pistol::Auto_pistol(Auto_pistol&& powerful) noexcept : Pistol(powerful){
    name = "Five-seven";
}

void Auto_pistol::setBulPerSec(int bulPerSec) {
    bul_per_sec = bulPerSec;
}

void Auto_pistol::setAutomatic(bool automatic) {
    Auto_pistol::automatic = automatic;
}

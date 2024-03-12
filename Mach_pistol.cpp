//
// Created by Msksim on 05.03.2024.
//xds

#include "Mach_pistol.h"

Mach_pistol::Mach_pistol(const Mach_pistol &other) : Pistol(other) {
    name = "Kesha";
    cout << "Deep Copy constructor called" << endl;
};

void Mach_pistol::setBulPerSec(int bulPerSec) {
    bul_per_sec = bulPerSec;
}

void Mach_pistol::setAutomatic(bool automatic) {
    Mach_pistol::automatic = automatic;
}
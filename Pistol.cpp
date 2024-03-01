//
// Created by Msksim on 29.02.2024.
//
#include <iostream>

using namespace std;

#include "Pistol.h"

Pistol::Pistol(Pistol&& powerful) noexcept
: weight(powerful.weight), name(powerful.name), bar_len(powerful.bar_len) {

    powerful.weight = 7.2;
    powerful.name = "Digle";
    powerful.bar_len = 23.5;
    cout<< "Name: " <<  powerful.name << "\nWeight: " <<  powerful.weight << "\nCalibr: " << powerful.bar_len <<endl;
}

void Pistol::show() {
    cout<< "Name: " << name << "\nWeight: " << weight << "\nCalibr: " << bar_len <<endl;
}
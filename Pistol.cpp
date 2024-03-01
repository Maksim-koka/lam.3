//
// Created by Msksim on 29.02.2024.
//
#include <iostream>

using namespace std;

#include "Pistol.h"

Pistol::Pistol(const Pistol& powerful) : weight(weight), bar_len(bar_len) {

}
void Pistol::show() const{
    cout<< "Name: " << name << "\nWeight: " << static_cast<float>(weight) << "\nCalibr" << static_cast<float>(bar_len) <<endl;
}
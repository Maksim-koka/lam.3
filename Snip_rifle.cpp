//
// Created by Msksim on 29.02.2024.
//
#include <iostream>
#include "Snip_rifle.h"

using namespace std;

Snip_rifle::Snip_rifle(float weight, string name, float calibr) : weight(weight), name(name), calibr(calibr) {}

void Snip_rifle::show() const{
    cout<< "Name: " << name << "\nWeight: " << static_cast<float>(weight) << "\nCalibr" << static_cast<float>(calibr) <<endl;
}



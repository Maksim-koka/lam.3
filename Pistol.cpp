//
// Created by Msksim on 29.02.2024.
//sxxxs
#include <iostream>

using namespace std;

#include "Pistol.h"

void Pistol::setWeight(float weight) {
    Pistol::weight = weight;
}

void Pistol::setName(const string &name) {
    Pistol::name = name;
}

void Pistol::setBarLen(float barLen) {
    bar_len = barLen;
}

float Pistol::getWeight() const {
    return weight;
}

const string &Pistol::getName() const {
    return name;
}

float Pistol::getBarLen() const {
    return bar_len;
}


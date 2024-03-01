//
// Created by Msksim on 29.02.2024.
//
using namespace std;

#ifndef INC_00P_MACH_GUN_H
#define INC_00P_MACH_GUN_H
#include <iostream>

class Mach_gun {
private:
    float weight;
    string name;
    int speed_bullet;
    bool Is_Available;

public:

    Mach_gun(float weight, string name, int speed_bullet) {
        this->weight = weight;
        this->name = name;
        this->speed_bullet = speed_bullet;
    }
    void print() const{
        cout<< "Name: " << name << "\nWeight: " << weight << "\nSpeed of bullet" << speed_bullet <<endl;
    }
};
//zda
#endif //INC_00P_MACH_GUN_H

//
// Created by Msksim on 29.02.2024.
//
using namespace std;

#ifndef INC_00P_MACH_GUN_H
#define INC_00P_MACH_GUN_H
#include <iostream>

class Mach_gun {
private:
    char *str;
    float weight;
    string name;
    int speed_bullet;
    bool Is_Available;

public:
    static int amount;

    static int num_of_orders(){
        return amount;
    }

    Mach_gun(float weight, string name, int speed_bullet) {
        this->weight = weight;
        this->name = name;
        this->speed_bullet = speed_bullet;
    }


    friend ostream& operator<<(std::ostream& os, const Mach_gun& Mach_gun) {
        os << "Amount: " << Mach_gun.speed_bullet;
        return os;
    }
    void print() const{
        cout<< "Name: " << name << "\nWeight: " << weight << "\nSpeed of bullet" << speed_bullet <<endl;
    }
};
//zdad
#endif //INC_00P_MACH_GUN_H

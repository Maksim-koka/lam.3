//
// Created by Msksim on 29.02.2024.
//

#ifndef INC_00P_PISTOL_H
#define INC_00P_PISTOL_H
#include <iostream>

using namespace std;

class Pistol {
private:
    float weight;
    string name;
    float bar_len;
    bool Is_Available() {
        return true;
    }

public:
   Pistol(float weight, string name, float bar_len) {
        this->weight = weight;
        this->name = name;
        this->bar_len = bar_len;
        void print( float weight, string name, float bar_len) ;
    }
};

#endif //INC_00P_PISTOL_H

//
// Created by Msksim on 29.02.2024.
//

#ifndef INC_00P_PISTOL_H
#define INC_00P_PISTOL_H
#include <iostream>
#include "Auto_pistol.h"

using namespace std;

class Pistol {
protected:
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
    }

    Pistol(Pistol&& powerful) noexcept;

    void show();

    friend ostream& operator<<(std::ostream& os, const Pistol& Pistol) {
        return os;
    }
};
//zds
#endif //INC_00P_PISTOL_H

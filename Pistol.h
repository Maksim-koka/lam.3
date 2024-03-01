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
    }
    float getWeight() const {return weight;}
    string getName() const {return name;}
    float getBar_len() const {return bar_len;}

    Pistol(const Pistol& powerful);

    void show() const;
};
//zds
#endif //INC_00P_PISTOL_H

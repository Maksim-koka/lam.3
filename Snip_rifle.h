//
// Created by Msksim on 29.02.2024.
//

#ifndef INC_00P_SNIP_RIFLE_H
#define INC_00P_SNIP_RIFLE_H
#include <iostream>

using namespace std;

class Sniper {
private:
    float weight;
    string name;
    float calibr;

    bool Is_Available() {
        return true;
    }

public:

    Sniper(Sniper &&rifle);

    Sniper(float weight, string name, float calibr) {
        this->weight = weight;
        this->name = name;
        this->calibr = calibr;
        void print(float weight, string name, float calibr);
    }
};


#endif //INC_00P_SNIP_RIFLE_H

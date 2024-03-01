//
// Created by Msksim on 29.02.2024.
//

#ifndef INC_00P_SNIP_RIFLE_H
#define INC_00P_SNIP_RIFLE_H
#include <iostream>

using namespace std;

class Snip_rifle {
private:
    float weight;
    string name;
    float calibr;

    bool Is_Available() {
        return true;
    }

public:
    Snip_rifle(float weight, string name, float calibr) {
        this->weight = weight;
        this->name = name;
        this->calibr = calibr;
    }
    void print() const{
        cout<< "Name: " << name << "\nWeight: " << weight << "\nCalibr" << calibr <<endl;
    }
};


#endif //INC_00P_SNIP_RIFLE_H

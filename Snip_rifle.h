//
// Created by Msksim on 29.02.2024.
//

#ifndef INC_00P_SNIP_RIFLE_H
#define INC_00P_SNIP_RIFLE_H
#include <iostream>

using namespace std;

class Snip_rifle {
private:
    float weight = 0;
    string name = nullptr;
    float calibr = 0;

    bool Is_Available() {
        return true;
    }

public:
    Snip_rifle(float weight = 0, string name = nullptr, float calibr = 0);

    void setWeight(float weight) {
        this->weight = weight;
    }
    void setName(string &name) {
        this->name = name;
    }
    void setCalibr(float calibr) {
       this->calibr = calibr;
    }
    float getWeight() const {return weight;}
    string getName() const {return name;}
    float getCalibr() const {return calibr;}

    void show() const;


    void print() const{
        cout<< "Name: " << name << "\nWeight: " << weight << "\nCalibr" << calibr <<endl;
    }
};


#endif //INC_00P_SNIP_RIFLE_H

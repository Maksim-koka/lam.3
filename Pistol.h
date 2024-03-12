//
// Created by Msksim on 29.02.2024.
//

#ifndef INC_00P_PISTOL_H
#define INC_00P_PISTOL_H
#include <iostream>

using namespace std;

class Pistol {
protected:
    float weight;
    string name;
    float bar_len;

public:
   Pistol(float weight, string name, float bar_len) {
        this->weight = weight;
        this->name = name;
        this->bar_len = bar_len;
    }
    Pistol(const Pistol& other) : bar_len(other.bar_len), weight(other.weight), name(other.name) {}

    Pistol(Pistol&& powerful) noexcept;

    Pistol() : name(""), weight(0), bar_len(0) {};

    ~Pistol(){}

    void show();


    friend ostream& operator<<(std::ostream& os, const Pistol& Pistol) {
        return os;
    }


};
//zdssxxxs
#endif //INC_00P_PISTOL_H

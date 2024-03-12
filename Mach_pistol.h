//
// Created by Msksim on 05.03.2024.
//

#ifndef INC_00P_MACH_PISTOL_H
#define INC_00P_MACH_PISTOL_H
#include "Pistol.h"

using namespace std;

class Mach_pistol : public Pistol{
private:
    int bul_per_sec;
    bool automatic;
public:
    Mach_pistol(float weight, string name, float bar_len, bool automatic){
        this->weight = weight;
        this->name = name;
        this->bar_len = bar_len;
        this->automatic = automatic;
    };

    Mach_pistol& operator=(const Mach_pistol& other) {
        weight = other.weight;
        name = other.name;
        bar_len = other.bar_len;
        return *this;
    }

    Mach_pistol(const Mach_pistol& other);
    void setBulPerSec(int bulPerSec);
    void setAutomatic(bool automatic);

};


#endif //INC_00P_MACH_PISTOL_Hxd

//
// Created by Msksim on 04.03.2024.
//

#ifndef INC_00P_AUTO_PISTOL_H
#define INC_00P_AUTO_PISTOL_H
#include "Pistol.h"


using namespace std;

class Auto_pistol : public Pistol{
protected:
    int bul_per_sec;
    bool automatic;
public:

    Auto_pistol(float weight, string name, float bar_len, bool automatic) {
        this->weight = weight;
        this->name = name;
        this->bar_len = bar_len;
        this->automatic = automatic;
    };

    Auto_pistol() : Pistol(), automatic(true){ }

    Auto_pistol(Auto_pistol&& powerful) noexcept;


    void setBulPerSec(int bulPerSec);
    void setAutomatic(bool automatic);

};


#endif //INC_00P_AUTO_PISTOL_H

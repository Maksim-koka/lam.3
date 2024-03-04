//
// Created by Msksim on 04.03.2024.
//

#ifndef INC_00P_AUTO_PISTOL_H
#define INC_00P_AUTO_PISTOL_H
#include "Pistol.h"

using namespace std;

class Auto_pistol : public Pistol{
private:
    int bul_per_sec;
    bool automatic;
public:
    void setBulPerSec(int bulPerSec);
    void setAutomatic(bool automatic);

};


#endif //INC_00P_AUTO_PISTOL_H

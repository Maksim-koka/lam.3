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
    void setBulPerSec(int bulPerSec);
    void setAutomatic(bool automatic);

};


#endif //INC_00P_MACH_PISTOL_H

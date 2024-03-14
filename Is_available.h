//
// Created by Msksim on 15.03.2024.
//
#include <iostream>
#ifndef INC_00P_IS_AVAILABLE_H
#define INC_00P_IS_AVAILABLE_H
#include "Ishop.h"
using namespace std;

class Is_available : public Ishop{
public:
    void print() override{
        cout<<"Is available"<<endl;
    }
};

//d
#endif //INC_00P_IS_AVAILABLE_H

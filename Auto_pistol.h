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

    virtual void show() const override{
        Pistol::show();
    }

    virtual void Polygon(int shoot) override{
        srand(time(NULL));
        string scan;

        cin >> scan;

        if (scan == ".") {
            while (shoot > 0) {
                int ran = (rand() % 2) + 0;

                if (ran == 1)
                    cout << "x" << endl;
                else
                    cout << "0" << endl;
                shoot--;
            }
        }
        else
            cout<<"Error";
    }

    void setBulPerSec(int bulPerSec);
    void setAutomatic(bool automatic);

};


#endif //INC_00P_AUTO_PISTOL_Hscs

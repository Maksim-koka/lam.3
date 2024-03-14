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

    virtual ~Pistol(){}

    virtual void show() const {
        cout<< "Name: " << name << "\nWeight: " << weight << "\nbarrel length: " << bar_len <<endl;
    };

    virtual void Polygon(int shoot) {
        srand(time(NULL));
        string scan = ".";
        while(scan == ".") {
            cin >> scan;

            if (shoot > 0) {
                int ran = (rand() % 2) + 0;
                if (ran == 1)
                    cout << "x" << endl;
                else
                    cout << "0" << endl;
                shoot--;
            } else {
                cout << "there is no more bullets" << endl;
                break;
            }
        }
    }

    friend ostream& operator<<(std::ostream& os, const Pistol& Pistol) {
        return os;
    }


};
//zdssxxxsx
#endif //INC_00P_PISTOL_H

#include <iostream>
#include "Pistol.h"
#include "Snip_rifle.h"
#include "Mach_gun.h"

int main() {
    int type;

    cout<<"Welcome to our shop!\n Choose Type of rifle:\n1)Sniper Rifles\n2)Machine guns\n3)Pistols"<<endl;
    cin>>type;
    if(type == 1) {
        Snip_rifle Barret(12.5, "Barret", 50);
        Barret.show();
    }else if (type == 2) {
        Mach_gun Ak47(4.7, "AK47",78);
        Ak47.print();
    }else if(type == 3) {
        Pistol PP(1.24, "PP", 23.4);
        PP.print();
    }else{
        cout<<"Error";
    }
    Pistol PP(1.24, "PP", 23.4);
    Snip_rifle Barret(12.5, "Barret", 50);
    Mach_gun Ak47(4.7, "AK47",78);

    return 0;
}

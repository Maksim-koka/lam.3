#include <iostream>
#include "Pistol.h"
#include "Snip_rifle.h"
#include "Mach_gun.h"

int main() {
    int type, increas, order;

    cout<<"Welcome to our shop!\n Choose Type of rifle:\n1)Sniper Rifles\n2)Machine guns\n3)Pistols"<<endl;
    cin>>type;

    if(type == 1) {
        Snip_rifle Barret(12.5, "Barret", 50);
        Barret.show();
    }else if (type == 2) {
        Mach_gun Ak47(4.7, "AK47",78);
        Ak47.print();
        cout<<"Do you like to make the order?\n 1)Yes\n 2)No"<<endl;
        cin>>order;

        if(order == 1) {
            cout<<"You have ordered: "<<Ak47.num_of_orders()<<" AK-47";
        }else
            cout<<"Bay";

    }else if(type == 3) {
        Pistol PP(1.24, "PP", 23.4);
        PP.show();
        cout<<"Would you like to see more powerful?\n 1)Yes\n 2)No\n";
        cin>>increas;

        if(increas == 1) {
            Pistol powerful(move(PP));
            cout << powerful;
        }else
            cout<<"Bay";

    }else
        cout<<"Error";

    return 0;
}

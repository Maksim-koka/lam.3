#include <iostream>
#include "Pistol.h"
#include "Snip_rifle.h"
#include "Mach_gun.h"
#include "Auto_pistol.h"
#include "Mach_pistol.h"
#include "Is_available.h"


int main() {
    int type, order, bullets, choise;
    float ent_weight, ent_bar;

    cout<<"Welcome to our shop!\n Choose Type of rifle:\n1)Sniper Rifles\n2)Machine guns\n3)Pistols"<<endl;
    cin>>type;

    if(type == 1) {
        const Snip_rifle Barret(12.5, "Barret", 50);
        Barret.show();
        Snip_rifle num1{30}, num2{60};

    }else if (type == 2) {
        const Mach_gun Ak47(4.7, "AK47",78);
        Ak47.print();
        cout<<"Do you like to make the order?\n 1)Yes\n 2)No"<<endl;
        cin>>order;

        if(order == 1) {
            cout<<"You have ordered: "<<Ak47.num_of_orders()<<" AK-47";
        }else
            cout<<"Bay";

    }else if(type == 3) {
        cout << "Enter weight:" << endl;
        cin>>ent_weight;

        cout << "Enter barrel length:" << endl;
        cin>>ent_bar;

        Pistol PP(ent_weight, "PP", ent_bar);
        Auto_pistol Glock(ent_weight, "Glock", ent_bar, true);
        Mach_pistol Makarov(ent_weight,"Makarov",ent_bar, false);
        Is_available available;
        Ishop* av_i;
        av_i = &available;

        Pistol* ptr;
        ptr = &PP;
        ptr->show();

//        Pistol* b = new Mach_pistol();
//        b->show();
//        delete b;

        cout<<"What next?"
              "\n 1)Choose more powerful"
              "\n 2)Choose automatic one"
              "\n 3)Choose machenic one"
              <<endl;
        cin>>choise;

        switch(choise){
            case 1: {
                Pistol power(move(PP));
                ptr = &power;
                ptr->show();
                av_i->print();
                break;
            }
            case 2: {
                ptr = &Glock;
                ptr->show();
                av_i->print();
                cout<<"What next?"
                      "\n 1)Choose more powerful"
                      "\n 2)Lets shoot"
                    <<endl;
                cin>>choise;
                if(choise == 1) {
                    Auto_pistol Glock2 = move(Glock);
                    cout << "It is your choise" << endl;
                   Glock2.show();
                    av_i->print();
                }
                break;
            }
            case 3: {
                Mach_pistol Mak{Makarov};
                ptr = &Mak;
                ptr->show();
                av_i->print();
            }
        }
        cout << "So lets try it, how many bullets would you like to stole?";
        cin >> bullets;

//        PP.Polygon(bullets);

//        Mach_pistol a = Makarov;
//        a.show();

        ptr->Polygon(bullets);

    }else
        cout<<"Error";


    return 0;
}

//sdsd Static Method Bindingd
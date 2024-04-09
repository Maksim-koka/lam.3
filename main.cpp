#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <filesystem>
#include "Pistol.h"
#include "Snip_rifle.h"
#include "Mach_gun.h"
#include "Auto_pistol.h"
#include "Mach_pistol.h"
#include "Is_available.h"

int type, order, bullets, choise, person, premium, password;
float ent_weight, ent_bar, character1, character2;
bool exeption;
string filename, char_name;

void customer_menu();

void admin_menu();

void seeAll(string filename);

void findOne(float ent, string filename);

void addOne(Pistol obj, string filename);

void addAll();

void changeOne(string filename);


int main() {


//d
//
//
//
//

//    Pistol person(35, "John Doe", 3);
//
//    // Запись
//    string serialized1 = person.serialize();
//    ofstream out("person.txt", ios::app);
//    out << serialized1 << "\n";
//    out.close();


    while (exeption == false) {
        try {
            cout << "Welcome to our shop!\n "
                    "Who you are?\n"
                    "1)Castomer\n"
                    "2)Admin" << endl;
            cin >> person;
            if(person == 1){
                exeption = true;
            }else if(person == 2){
                cout << "Enter the password: " << endl;
                cin >> password;
                if (password == 1234)
                    exeption = true;
                else
                    throw false;
            }else
                throw false;
        }
        catch (bool){
            cout << "You entered wrong nymber\n"
                    "Try again" << endl;
        }
    }

    if(person==1) {
        customer_menu();
    }
    else if (person == 2){
        exeption = false;
        while(exeption == false) {
            try {
                cout << "Hi Dady\n"
                        "What next?\n"
                        "1)Admin console\n"
                        "2)Castomer view" << endl;
                cin >> premium;

                if(premium == 1){
                    admin_menu();
                    exeption = true;
                }else if(premium == 2){
                    customer_menu();
                    exeption = true;
                }else
                    throw false;

            }catch (bool){
                cout << "Dady you entered the wrong number" << endl;
            }
        }
    }

//    // Чтение
//    string filename = "person.txt";
//
//    // Чтение данных из файла
//    ifstream in(filename);
//    if (!in.is_open()) {
//        cerr << "Error opening file " << filename << endl;
//        return 1;
//    }
//
//    // Вывод информации
//
//    while(!in.eof()){
//        string serialized_data = "";
//        getline(in, serialized_data);
//        in.close();
//
//        // Десериализация данных
//        Pistol person2;
//        person2.deserialize(serialized_data);
//
//        person2.show();
//    }

    return 0;
}


void admin_menu(){
    exeption = false;
    while(exeption == false) {

        try {
            cout << "Choose class with which you would like to work: \n"
                    "1)Sniper Rifles\n"
                    "2)Machine guns\n"
                    "3)Pistols"<<endl;
            cin >> choise;

            if(choise == 1){
                filename = "Sniper.txt";
                exeption = true;
            }else if(choise == 2){
                filename = "Machine.txt";
                exeption = true;
            }else if (choise == 3) {
                cout << "Mechenic or auto pistol?\n"
                        "1)Mechenic\n"
                        "2)Auto"<< endl;
                cin >> choise;
                if(choise == 1)
                    filename = "Mach_Pistols.txt";
                else
                    filename = "Auto_Pistols.txt";
                exeption = true;
            }
            else
                throw false;

        }catch (bool){
            cout << "Dady you entered the wrong number" << endl;
        }
    }

    cout<<"Choose what you want to do:\n"
          "1)Add information\n"
          "2)See information\n"
          "3)Change information"<<endl;
    cin>>type;

    switch (type) {
        case 1: {
            cout << "Name, 1-st characteristic, 2-nd characteristic: " << endl;
            cin >> char_name >> character1 >> character2;
            Pistol ww(character1, char_name, character2);
            addOne(ww, filename);
            break;
        }
        case 2: {
            cout << "Would you like to see all information or just pistol with same featurs?:\n"
                    "1)All\n"
                    "2)Same featurs"<< endl;
            cin >> choise;
            switch(choise){
                case 1: {
                    seeAll(filename);
                    break;
                }
                case 2: {
                    cout << "Enter weight of pistol: " << endl;
                    cin >> ent_weight;
                    findOne(ent_weight, filename);
                    break;
                }
                default: {
                    cout << "You entered the wrong number" << endl;
                    break;
                }
            }
            break;
        }
        case 3:{
            cout << "You entered the wrong number" << endl;
            break;
        }
        default: {
            cout << "You entered the wrong number" << endl;
            break;
        }
    }

}




void customer_menu(){
    cout<<"Choose Type of rifle:\n"
          "1)Sniper Rifles\n"
          "2)Machine guns\n"
          "3)Pistols"<<endl;
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

        ptr->Polygon(bullets);

    }else
        cout<<"Error";
}

void seeAll(string filename){

    // Чтение данных из файла
    vector<Pistol> part;
    ifstream in(filename);
    if (!in.is_open()) {
        cerr << "Error opening file " << filename << endl;
    }
    string line;
    while (getline(in, line)) {
        Pistol obj;
        obj.deserialize(line);
        part.push_back(obj);
    }
    in.close();

    for (Pistol& obj : part) {
        obj.show();
        cout << endl;
    }
}

void findOne(float ent, string filename){

    Pistol obj;

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "File is not open" << endl;
    }

    string line;

    while (getline(file, line)) {
        obj.deserialize(line);
        // Ищем объект с ID 10
        if (obj.getWeight() == ent) {
            cout<<"File is found"<<endl;
            obj.show();
        }
    }

}

void addOne(Pistol obj, string filename){
    //Save
    string serialized1 = obj.serialize();
    ofstream out(filename, ios::app);
    out << serialized1 << "\n";
    out.close();
}

void addAll(){

}

void changeOne(string filename){

    ifstream file(filename, ios::in);
    if (!file.is_open()) {
        cout << "Файл не найден" << endl;
    }

    vector<std::shared_ptr<Pistol>> person;

    string line;

    vector<string> lines;
    Pistol object;

    ofstream out(filename);

    while (getline(file, line)) {

        lines.push_back(line);

        object.deserialize(line);

        // Ищем объект с ID 10
        if (object.getWeight() == 43) {
            object.setName("New Name"); // Изменяем имя объекта
            break;
        }
    }

    file >> line;

    out.seekp(0);
    out << line;
    out.close();


    file.close();
    out.close();
}
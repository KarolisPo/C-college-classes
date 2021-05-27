#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()

{
    cout << "Karolis Pociunas" << endl;

    string vardas;
    int x;

    cout << "Iveskite draugo varda: ";
    cin >> vardas;

    if (vardas == "Jonas") x=1;
    else if (vardas == "Petras") x=2;
    else if (vardas == "Martynas") x=3;
    else if (vardas == "Stasys") x=4;
    else if (vardas == "Gintaras") x=5;
    else if (vardas == "Viktoras") x=6;
    else if (vardas == "Ilona") x=7;
    else if (vardas == "Vilija") x=8;
    else if (vardas == "Gintare") x=9;
    else if (vardas == "Alma") x=10;
    else
        cout << "Vardas nerastas";
    switch(x){
        case 1:
            cout << "Zalia\n";
            break;
        case 2:
            cout << "Raudona\n";
            break;
        case 3:
            cout << "Zalia\n";
            break;
        case 4:
            cout << "Raudona\n";
            break;
        case 5:
            cout << "Geltona\n";
            break;
        case 6:
            cout << "Melyna\n";
            break;
        case 7:
            cout << "Geltona\n";
            break;
        case 8:
            cout << "Melyna\n";
            break;
        case 9:
            cout << "Juoda\n";
            break;
        case 10:
            cout << "Balta\n";
            break;
            }
           cout << endl;
           return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main() // pagrindine programos funkcija
{
double x, xp,xg, xh; // nurodome jog kintamieji yra skaiciai

cout << "Karolis Pociunas\n"<<endl; //spausdinu savo varda
cout<<"iveskite kintamojo x pradzia: "; //suteikiu kintamiesiems x, xp, xg ir xh reiksmes
cin>>xp;
cout<<"iveskite kintamojo x pabaiga: ";
cin>>xg;
cout<<"iveskite intervalo kitimo zingsni: ";
cin>>xh;
x=xp; // nurodau jog xp yra lygi x
double san = 1; // sandauga ir suma yra lygi 1 ir 0
double suma = 0;
for(x; x<=xg; x=x+xh) // ciklo pradzia ir salyga
    {
    cout<<"y=6*sinx+cos2x= "<< 6*sin(x)+cos(2*x)<<endl; //ciklo algoritmas
        san=san*6*sin(x)+cos(2*x);
        suma=suma+6*sin(x)+(cos(2*x);
        x=(x+xh)-1;

}
cout<<"Sandauga= "<<  san << endl; // galutiniu reiksmiu isvedimas suma, kiekis, sandauga ir vidurkis
cout<<"Suma= "<< suma<< endl;
cout<<"Kiekis= "<< x - xp<< endl;
cout<< "Vidurkis=Suma/Kiekis= "<< suma/(x-xp) << endl;



}

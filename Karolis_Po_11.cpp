#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <stdlib.h>

using namespace std;
int Mas[30];

int masyvo_dydis ()
{
    int n;
    cout <<"Iveskite masyvo dydi: " <<endl;
    cin >>n;
    return n;
}
void masyvo_elementai (int n)
{
for (int i = 0; i <= n - 1; i++)
    {
cout<<"Iveskite "<<i+1<<"-aji masyvo elementa"<<endl;
cin >> Mas[i];
}
return;
}
void atsitiktiniai_elementai (int n)
{
for (int i = 0; i< n; i++){
     Mas[i]=rand() % 210+-100;
}
cout << "Masyvo elementai sugeneruoti"<< endl;
return;
}
void spausdinti_masyva (int n)
{
for (int i = 0; i< n; i++){
     cout << "mas["<< i <<"]="<< Mas[i] <<endl;
}
cout << endl;
return;
}
int maziausias_elementas (int n)
{
int maz = Mas[0];
for (int i = 1; i< n; i++)
    {
if (Mas[i] < maz) {
        maz = Mas[i];
        }
    }
return maz;
}
int didziausias_elementas (int n)
{
int did = Mas[0];
for (int i = 1; i< n; i++){
if (Mas[i] > did)
{
            did = Mas[i];
    }
}
return did;
}
int elementu_suma (int n)
{
int suma = 0;
for (int i = 0; i< n; i++)
    {
    suma = suma + Mas[i];
}
return suma;
}
float Vidurkis (float n){
float suma = 0;
for (int i = 0; i< n; i++)
{
suma = suma + Mas[i];
}
float vidurkis = suma/n;
return vidurkis;
}



void teigiami_neigiami(int n)
{
int teigiamu = 0, neigiamu = 0;
for (int i = 0; i< n; i++){
if (Mas[i] > 0)
    teigiamu++;
if (Mas[i]< 0)
    neigiamu++;
}
cout <<"Masyve yra teigiamu elementu: " << teigiamu <<endl;
cout <<"Masyve yra neigiamu elementu: " << neigiamu <<endl;
}

void teigiamu_neigiamu_suma (int n)
{
int teigiamu =0, neigiamu=0;
for (int i= 0; i<n; i++){
    if(Mas[i] >= 0)
        teigiamu+= Mas[i];
    else
        neigiamu+= Mas[i];
    }
cout <<"Teigiamu masyvo elementu suma: " << teigiamu <<endl;
cout <<"Neigiamu masuvo elementu suma: " << neigiamu <<endl;
}
void keitimas (int n)
{int did=Mas[0];

for (int i = 0; i< n; i++){
    if (Mas[i] > did)
        did = Mas[i];

    if(Mas[i]>did/2)
        Mas[i]=0;
        cout << "mas["<< i <<"]="<< Mas[i] <<endl;

}
cout << endl;
return;
}

int main()
{
    int k, d;
    k=0;
cout << "Karolis Pociunas\n" << endl;
while (k>=0 and k<=12)
{   cout<<endl;
    cout<<"1 Ivesti masyvo dydi"<<endl;
    cout<<"2 Ivesti masyvo elementus"<<endl;
    cout<<"3 Generuoti elementus"<<endl;
    cout<<"4 Spausdinti masyva"<<endl;
    cout<<"5 Maziausias masyvo elementas"<<endl;
    cout<<"6 Didziausias masyvo elementas"<<endl;
    cout<<"7 Elementu suma"<<endl;
    cout<<"8 Elementu vidurkis"<<endl;
    cout<<"9 Teigiamu ir neigiamu elementu kiekiai"<<endl;
    cout<<"10 Teigiamu Ir neigiamu Masyvo elementu sumas"<<endl;
    cout<<"11 Keisti elementus"<<endl;
    cout<<"12 Baigti\n"<<endl;
    cout<<"Pasirinkite veiksma: ";
    cin>>k;
    cout<<endl;

    switch (k)
    {
    case 1:
    {
      d= masyvo_dydis();
    break;
    case 2:
        masyvo_elementai(d);
    break;
    case 3:
        atsitiktiniai_elementai(d);
    break;
    case 4:
        spausdinti_masyva(d);
    break;
    case 5:
        cout <<"Maziausias masyvo elementas: "<<maziausias_elementas(d)<<endl;
    break;
    case 6:
        cout <<"Didziausias masyvo elementas: "<<didziausias_elementas(d)<<endl;
    break;
    case 7:
        cout <<"Masyvo elementu suma: "<<elementu_suma(d)<<endl;
    break;
    case 9:
        teigiami_neigiami(d);
    break;
    case 8:
        cout << "Masyvo elementu vidurkis yra: "<< Vidurkis(d) << endl;
    break;
    case 10:
        teigiamu_neigiamu_suma(d);
    break;
    case 11:
        keitimas(d);
    break;
    case 12:
         exit(0);
    }
    default:
    {
       cout<<"Baigti darba"<<endl;
    }
}
}
    return 0;
}

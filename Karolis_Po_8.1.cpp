#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;

int main()
{
    srand(time(NULL));
    int Xdid, Ydid;
    int Xmaz, Ymaz;
    int n;
    int t;
    float Xsuma, Ysuma;
    float X[100];
    float Y[100];

cout << "Karolis Pociunas"<< endl;

cout << "Iveskite kiek tasku yra plokstumoje: ";
cin >> t;
cout << "Masyvo elemntai yra: " << endl;

Ysuma=0;
Xsuma = 0;
Xdid = -100;
Xmaz = 100;
Ydid = -100;
Ymaz = 100;

for(n=0; n<t; n++)
{
    X[n]=rand()% 200+-100;
    cout<< "X["<<n<<"]= " << X[n] << endl;

    Y[n]=rand()% 200+-100;
    cout<< "Y["<<n<<"]= " << Y[n] << endl;

    cout << "Atstumas iki atskaitos tasko yra: " << sqrt(X[n]*X[n]+Y[n]*Y[n]) <<"\n" << endl;

    Ysuma+=Y[n];
    Xsuma+=X[n];

    if (X[n] >= Xdid)
        Xdid=X[n];
    if (X[n]<=Xmaz)
        Xmaz=X[n];
    if (Y[n] >= Ydid)
        Ydid=Y[n];
    if (Y[n]<=Ymaz)
        Ymaz=Y[n];

}

cout <<"Didziausias X[n] masyvo elementas yra: "<< Xdid << endl;
cout <<"Maziausias masyvo X[n] elementas yra: "<< Xmaz << endl;
cout << "Masyvo X[n] elementu suma yra : " << Xsuma << endl;

cout <<"Didziausias Y[n] masyvo elementas yra: "<< Ydid << endl;
cout <<"Maziausias Y[n] masyvo elementas yra: "<< Ymaz << endl;
cout << "Masyvo elementu Y[n] suma yra : " << Ysuma << endl;


}


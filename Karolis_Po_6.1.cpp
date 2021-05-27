#include <iostream>
#include <math.h>
using namespace std;

int main(){

int x, xp,xg, xh, a, b;
double y;

cout << "Karolis Pociunas\n"<<endl;
cout << "y=ax^2+b"<<endl;
cout << "Iveskite zinomaji a: ";
cin>>a;
cout << "Iveskite zinomaji b: ";
cin>>b;
cout<<"iveskite kintamojo x pradzia: ";
cin>>xp;
cout<<"iveskite kintamojo x pabaiga: ";
cin>>xg;
cout<<"iveskite intervalo kitimo zingsni: ";
cin>>xh;
x=xp;
y=a*(x*x)+b;
if (a==0){
    cout << "y=b=" << b << endl;}
else{
for(x; x<=xg; x=x+xh)
{
    cout<< "y=ax^2+b= "<<a*(x*x)+b<<endl;

}
    if (a>0){
    cout << "Didziausia y reiksme, kai x= "<< xg << endl;
    cout << "Kai x= "<<xg<<" y= " << a*xg*xg+b<< endl;
    cout << "Maziausia y reiksme, kai x= "<< xp<<endl;
    cout << "Kai x= "<<xp<<" y= " << a*xp*xp+b<<endl;}
    if (a<0){
    cout << "Didziausia y reiksme, kai x= "<< xp << endl;
    cout << "Kai x= "<<xp<<" y= " << a*xp*xp+b<< endl;
    cout << "Maziausia y reiksme, kai x= "<< xg<<endl;
    cout << "Kai x= "<<xg<<" y= " << a*xg*xg+b<<endl;}
    }

}



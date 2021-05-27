#include <iostream>
#include <math.h>
using namespace std;

int main()
{
double x, xp,xg, xh;

cout << "Karolis Pociunas\n"<<endl;
cout<<"iveskite kintamojo x pradzia: ";
cin>>xp;
cout<<"iveskite kintamojo x pabaiga: ";
cin>>xg;
cout<<"iveskite intervalo kitimo zingsni: ";
cin>>xh;
x=xp;

while(x<=xg)
    {
    cout<<"y=6*sin(x)+cos2x= "<< (6*sin(x))+(cos(2*x))<<endl;
        x=x+xh;
}


}

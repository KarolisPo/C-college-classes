#include <iostream>

using namespace std;

int main()

{
cout << "Karolis Pociunas" << endl;

float y,x,a,b;

cout << "Iveskite skaiciu y: ";
cin >> y;
cout << "Iveskite skaiciu x: ";
cin >> x;
cout << "Iveskite skaiciu a: ";
cin >> a;
cout << "Iveskite skaiciu b: ";
cin >> b;

if(y<-5)
    cout<<"z= y = " << y << endl;
else if(y >= -5 and y<0)
    cout<<"z= 2*y= " << 2*y << endl;
else
    cout << "z= y*3+5 = " << y*3+5 << endl;

if (x<0)
    cout<< "y= a*(x*x)+b= " << a*(x*x)+b << endl;
else
    cout << "y= 2x+1= " << 2*x+1 << endl;

}

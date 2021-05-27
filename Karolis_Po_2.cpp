#include <iostream>

using namespace std;

int main()

{
cout << "Karolis Pociunas" << endl;

float y;

cout << "Iveskite y: ";
cin >> y;

if(y<-5)
    cout<<"z= " << y << endl;
else if(y >= -5 and y<0)
    cout<<"z= " << 2*y << endl;
else
    cout << "z= " << y*3+5 << endl;


}

#include <iostream>

using namespace std;

int main(void)
{
cout << "Karolis Pociunas" << endl;

float kgkaina;
float k;
int n;

cout << "Iveskite cukraus kaina uz kilograma: ";
cin >> kgkaina;
cout << "Iveskite kiek kilogramu cukraus telpa maise: ";
cin >> k;
cout << "Iveskite kiek maisu cukraus perkate: ";
cin >> n;
cout << "Uz cukru jums reikia sumoketi " << kgkaina*k*n << " euru" << endl;

}

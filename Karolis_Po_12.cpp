#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>


using namespace std;
int n;
int Mas[1000];

int dydis ()
{
    int n;
    cout <<"Iveskite masyvo dydi: " <<endl;
    cin >>n;
    return n;
}
void elementai (int n)
    {
for (int i = 0; i <= n - 1; i++)
    {
cout<<"Iveskite "<<i+1<<"-aji masyvo elementa"<<endl;
cin >> Mas[i];
}
return;
}
void atsitiktiniai (int n)
{
for (int i = 0; i< n; i++)
    {
     Mas[i]=rand() % 40+-20;
}
cout << "Masyvo elementai sugeneruoti"<< endl;
return;
}
void spausdinti (int n)
{
for (int i = 0; i< n; i++)
    {
     cout << "Mas["<< i <<"]="<< Mas[i] <<endl;
}
cout << endl;
return;
}
int isrinkimo (int n)
{
for (int i = 0; i< n-1; i++)
    {
    int s = i;
    for (int y = i+1; y<n; y++){
        if(Mas[y]<Mas[s]);
        int s = y;
    }
    if(i!=s)
        swap(Mas[i], Mas[s]);
    }
}
int main()
{
    int c, d;
    c=0;
cout << "Karolis Pociunas\n" << endl;
while (c>=0 and c<=6)
{   cout<<endl;
    cout<<"1 Ivesti masyvo dydi"<<endl;
    cout<<"2 Ivesti masyvo elementus"<<endl;
    cout<<"3 Generuoti elementus"<<endl;
    cout<<"4 Spausdinti masyva"<<endl;
    cout<<"5 Masyvo rusiavimas"<<endl;
    cout<<"Pasirinkite veiksma: ";
    cin>>c;
    cout<<endl;

    switch (c)
    {
    case 1:
    {
      d=dydis();
    break;
    case 2:
       elementai(d);
    break;
    case 3:
        atsitiktiniai(d);
    break;
    case 4:
        spausdinti(d);
    break;
    case 5:
        isrinkimo (d);
    break;
    case 6:
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



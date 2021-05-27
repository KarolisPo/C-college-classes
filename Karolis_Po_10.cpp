#include <iostream>
#include <math.h>
using namespace std;

int teigiamos(double xp, double xg, double xh)
{
    cout << "Skaiciavimams naudojamos reiksmes: " << endl;
    double x, y;
    int kiek=0;
    for (x=xp; x<=xg; x=x+xh)
    {
        y=6*sin(x)+cos(2*x);

        cout << " y=6*sin(x)+cos(2*x)= " << y << endl;
        if (y>0)
          {
            kiek=kiek+1;
          }

    }
return kiek;
}

double san (double xp, double xg, double xh)
{
    cout << "Skaiciavimams naudojamos reiksmes: " << endl;
        double san=1;
        double y, x=xp;
    for(x; x<=xg; x=x+xh)
    {
        y=6*sin(x)+cos(2*x);
        cout << " y=6*sin(x)+cos(2*x)= " << y << endl;
        san=san*6*sin(x)+cos(2*x);
    }
return san;
}
double suma (double xp, double xg, double xh)
{
    cout << "Skaiciavimams naudojamos reiksmes: " << endl;
    double suma=0;
    double y, x=xp;
    for(x; x<=xg; x=x+xh)
    {
        y=6*sin(x)+cos(2*x);
        cout << " y=6*sin(x)+cos(2*x)= " << y << endl;
        suma=suma+6*sin(x)+cos(2*x);
    }
return suma;
}
double vidurkis (double xp, double xg, double xh)
{
    cout << "Skaiciavimams naudojamos reiksmes: " << endl;
    double vid;
    double suma=0;
    double y, x=xp;
    for(x; x<=xg; x=x+xh)
    {
        y=6*sin(x)+cos(2*x);
        cout << " y=6*sin(x)+cos(2*x)= " << y << endl;
        suma=suma +6*sin(x)+cos(2*x);
        x=(x+xh)-1;
        vid= suma/x;
    }
return vid;
}

int main ()
{
    double x,xp,xg,xh;
    int k=0;
    cout<<"iveskite kintamojo x pradzia: ";
    cin>>xp;
    cout<<"iveskite kintamojo x pabaiga: ";
    cin>>xg;
    cout<<"iveskite intervalo kitimo zingsni: ";
    cin>>xh;

while (k>=0 and k<=3)
{
    cout<<" "<<endl;
    cout<<"Pasirinkite veiksma, kuri norite atlikti: "<<endl;
    cout<<"1. Teigiamu reiksmiu skaicius"<<endl;
    cout<<"2. Sandauga"<<endl;
    cout<<"3. Suma"<<endl;
    cout<<"4. Vidurkis"<<endl;
    cin>>k;

     switch (k)
     {
    case 1:
    {
      cout<<teigiamos(xp,xg,xh) <<endl;
      break;
     }
    case 2:
    {
      cout<<san(xp,xg,xh) <<endl;
      break;
    }
    case 3:
    {
      cout<<suma(xp,xg,xh) <<endl;
      break;
      }
    case 4:
    {
      cout<<vidurkis(xp,xg,xh) <<endl;
      break;
      }
     default:
     {
       cout<<"Baigti darba"<<endl;
     }
     }
}
    return 0;
}








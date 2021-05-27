#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{
    cout << "Karolis Pociunas" << endl;
    int x, y, suma, k;
    int A[5][5];
    srand(time(NULL));
    suma = 0;
    k = 0;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            x=rand()% 18+-9;
            cout <<"A["<<i<<"]["<<j<<"]= "<< x<<"  ";
            if (i<1)
                suma = suma + x;
            if (j>3)
            {
                if(x>0)
                    k=k+1;
            }
        }
        cout<<endl;
    }
cout << "Pirmosios eilutes elementu suma yra: " << suma<< endl;
cout << "Teigiamu elementu kiekis yra: " << k << endl;


}

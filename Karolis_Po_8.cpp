#include <iostream>
#include <stdlib.h>
#include <time.h>



using namespace std;

int main()
{   int did;
    int maz;
    srand(time(NULL));
    int A[30];
    int x;
    int n;
    float suma;
cout << "Karolis Pociunas"<< endl;
cout << "Masyvo elemntai yra" << endl;
suma = 0;
did = -100;
maz = 110;
for(n=0; n<30; n++)
{
    x = rand()% 210+-100;
    A[n]=x;
    cout<< "A["<<n<<"]= " << A[n] << endl;
    suma+=A[n];


    if (A[n] >= did)
        did=A[n];
    if (A[n]<=maz)
        maz=A[n];


}
cout <<"Didziausias masyvo elementas yra: "<< did << endl;
cout <<"Maziausias masyvo elementas yra: "<< maz << endl;
cout << "Masyvo elementu suma yra : " << suma << endl;
}


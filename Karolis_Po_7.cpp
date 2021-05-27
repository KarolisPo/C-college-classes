#include <iostream>
#include <stdlib.h>
#include <time.h>



using namespace std;

int main()
{   int did;
    srand(time(NULL));
    float A[10];
    int x;
    int n;
cout << "Karolis Pociunas"<< endl;
cout << "Masyvo elemntai yra" << endl;
;
did = 0;
for(n=0; n<10; n++)
{
    x = rand()%10+1;
    A[n]=x;
    cout<< "A["<<n<<"]= " << A[n] << endl;
    if (A[n] >= did)
        did=A[n];



}
cout <<"Didziausias masyvo elementas yra: "<< did << endl;

}

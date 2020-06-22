#include "iostream"
#include "conio.h"
using namespace std;

int main()
{
    int arreglo[200];
    int n=0;
    int i=0;
    for (i=200; i>=0; i--){
         n=n+1;

         if(i%2!=0){
              
              arreglo[i]=n;
        cout<<"Numero Impar ["<<i<<"]"<<endl;
         }
    }


    return 0;

}
    
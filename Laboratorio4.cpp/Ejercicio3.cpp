#include "iostream"

 using namespace std;
 int main ()
 {
     float Numero;
     cout <<"Ingrese el numero: ";
     cin>> Numero;
     if(Numero>0){
         cout<<" El numero es Positivo";
     }
     else if (Numero<0){
         cout<< " El numero es Negativo";
     }
     else{
         cout<< " El numero es Cero";
     }
 }
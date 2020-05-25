#include "iostream"

 using namespace std;
 int main ()
 {
     int N1,N2;

     cout<< "Ingrese el numero: ";
     cin>> N1;

     cout<< "Ingrese el segundo numero: ";
     cin>> N2;

     if (N1%N2 ==0){
         cout << N1 <<" es divisible con "<<N2 <<endl;
     }
     else{ 
         cout <<N1 << " no es divisible entre " << N2<<endl;

     }
 }
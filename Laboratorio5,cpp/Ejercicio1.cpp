#include "iostream"

using namespace std;
 
 int MCD(int Num1,int Num2)
 {  
     int resultado=1;
     for(int i=1;i<=Num1;i++){
         if ((Num1%i==0) &&  (Num2%i==0))
         {
             resultado=i;
         }
     }
       return resultado;
 }
 int main()
 {
     int x,y;
     cout << "Ingrese el primer numero:\n";
     cin>> x;
     cout << "Ingrese el segundo numero:\n";
     cin>> y;
      int resultado=MCD(x,y);
      cout<< " EL Maximo Comun Divisor de " <<x<<" y "<<y<<" es "<<resultado<<endl;


     return 0;
 }

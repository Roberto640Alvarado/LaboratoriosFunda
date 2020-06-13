#include "iostream"

using namespace std;

bool Bisiesto(int year){
    if((year%400)==0)// Si el numero es divisible entre 400 si sera año Bisiesto
       return true;
    else if((year%4)==0 && (year%100) !=0)//si es divisible entre 4, pero es divisible entre 100 No sera un año bisiesto
       return true;
    else
 
      return false;
    
}
int main() {
    
    int year;
    cout<<" Introduzca el a\244o:\n";// he colocado 244 para que el programa de "ñ"
    cin >> year;
    if((Bisiesto(year))==true)// si es verdadero ,el año sera bisiesto
       cout<< " El a\244o es bisiesto";
    else 
       cout<< " EL a\244o no es bisiesto";

    return 0;      

}

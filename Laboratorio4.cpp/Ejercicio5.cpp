#include "iostream"
#include "string.h"

 using namespace std;
 int main (void)
 {
     string palabra;
     cout <<" Ingrese una palabra: ";
     cin >> palabra;
     int c=palabra.length();
     if((palabra[0])==palabra [c-1]){
         cout<< " Empieza y termina con la misma letra";
     }
     else {
         cout<< " Empieza y termina con diferente letra";
     }

    
 }
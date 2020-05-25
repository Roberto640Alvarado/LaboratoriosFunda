#include "iostream"

 using namespace std;

 int main ()
 {
     int opciones;
     cout << " Seleccione una opcion de color \n";
     cout << "1 Rojo \n";
     cout << "2 Negro \n";
     cout << "3 Azul \n";
     cout << "4 Verde \n";
     cout << "5 Blanco \n";
     cin >> opciones;

switch(opciones)
{
    case 1: cout << " El color Rojo tiene un precio de: $20"<<endl; break;
    case 2: cout << " El color Negro tiene un precio de: $10"<<endl; break;
    case 3: cout << " El color Azul tiene un precio de: $30"<<endl; break;
    case 4: cout << " El color Verde tiene un precio de: $50"<<endl; break;
    case 5: cout << " El color Blanco tiene un precio de: $60"<<endl; break;
    default: cout << " El numero ingresado no esta en las opciones"<<endl; break;
}
 }
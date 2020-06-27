#include "iostream"
using namespace std;

char clavemurcielago(char caracter){   //Creamos una funcion para introducir los datos de la clave murcielago
   switch (caracter)
   {
      case 'm':caracter='0'; break;   //asignamos los valores determinados a cada letra de la clave
      case 'u':caracter='1'; break;
      case 'r':caracter='2'; break;
      case 'c':caracter='3'; break;
      case 'i':caracter='4'; break;
      case 'e':caracter='5'; break;
      case 'l':caracter='6'; break;
      case 'a':caracter='7'; break;
      case 'g':caracter='8'; break;
      case 'o':caracter='9'; break;
      
   }
   return caracter;
}
int main(){
   int longitud;
   string arreglo;
   cout<<"CLAVE MURCIELAGO"<<endl;
   cout<<"Introduzca una frase: "<<endl;
   getline(cin, arreglo);
   longitud=arreglo.length();
   for(int i=0; i<longitud ;i++)
   {
      cout<<(clavemurcielago(arreglo[i]));   //llamanos a la funcion
   }
   return 0;
}
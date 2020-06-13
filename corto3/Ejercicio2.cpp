#include "iostream"
#include "stdlib.h"//Para evitar que se cierre
#include "time.h"// esta libreria para generar el Nª aleatorio

using namespace std;

int aleatorio() {
 
    int aleatorio;
     srand(time(NULL));// Generador de un numero aleatorio
      aleatorio=1+ rand()%(100-1);// sus limites
       return aleatorio;// retorna el Nª aleatorio
}
int main() {
    int num=aleatorio(), Posible_resultados;
    cout<<" ADIVINA UN NUMERO ENTERO ENTRE 1 Y 100\n";
    cout << "Tendras 5 intentos para adivinar el numero,si deseas terminar de jugar presiona CTRL+S+ENTER\n";
    for (int i=5; i >=1; i--){// ciclo for con variable inicial y su valor final 
        cout << "Introduzca un numero: ";
        cin >> Posible_resultados;
        if( !cin >> Posible_resultados){// si la salida es igual al Nª aleatorio finalizara
            cout << " Juego finalizado\n ";
             cout<< " El numero aleatorio era: "<<num;
              break;
        }
        else if (Posible_resultados==num){// Si el Nª es igual al aleatorio
            cout << " Felicidades haz encontrado el numero aleatorio";
            break;
        }
        if(Posible_resultados>num&&(i-1)!=0)// Si la expresion del lado izquierdo es falsa entonces la operacion de lado derecho nunca se evalua
        cout << "El numero es mayor al numero secreto\n Los intentos restantes son: "<< (i-1)<<endl;
        else if(Posible_resultados<num&& (i-1)!=0)
        cout <<"El numero es menor al numero secreto\n Los intentos restantes son: "<< (i-1)<<endl;
        else 
        cout << "Te has quedado sin intentos :(\n  El numero aleatorio es: "<<num;
    }
    return 0;


}

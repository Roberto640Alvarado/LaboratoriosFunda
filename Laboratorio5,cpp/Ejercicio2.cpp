#include "iostream"
#include "conio.h"
#include "stdio.h"

using namespace std;

int segundodespues()
{
    int hh;
    int mm;
    int ss;
    char caracter;

     ss= ss+1;
    if (ss >=60){
        ss=0;
        mm=mm+1;
    if(mm>=60){
        mm=0;
        hh = hh+1;
    if(hh>=24){
         hh=0;
      }
    }else
    {
        cout << " ERROR: la hora es Incorrecta";
    }
       return 0;
    }

}
int main()
{
    int hh;
    int mm;
    int ss;
    char caracter,t;

    cout << " Introduzca la hora: ";
    cin>> hh, caracter;
    cout<< " Introduzca los minutos: ";
    cin >> mm,caracter;
    cout << " Introduca los segundos: ";
    cin>> ss;
    ss= ss+1;
    if (ss >=60){
        ss=0;
        mm=mm+1;
    if(mm>=60){
        mm=0;
        hh = hh+1;
    if(hh>=24){
        hh=0;
       }
    }
    else
    {
        cout << " ERROR: la hora es Incorrecta";
    }
    
       
    }

    cout<< " Un segundo despues la hora es: "<<hh<< ":"<<mm<< ":"<<ss<<endl;


}
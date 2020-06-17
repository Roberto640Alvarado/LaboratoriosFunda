#include "iostream"

using namespace std;

bool bisiesto(int year)
{
    return ((year%4)==0 && (year% 100)!=0 ) || ((year%400)==0);
}
int fechas(int mes,int year)
{
    int dias=31;
    if (mes==4 || mes ==6 ||mes==9 || mes==11){
        dias =30;
    }
    else if(mes==2){
        if(bisiesto(year)){
            dias=29;
        }
        else{
            dias=28;
        }    
    
    } 
    return dias;
}  
int main()
{
    int dia,mes, year;
    char barra;
    cout << " Introduzca el Dia: ";
    cin>> dia,barra;
    cout << "Introduzca el Mes: ";
    cin >> mes,barra;
    cout << " Ingrese el A\244o: ";
    cin>> year;
    dia++;
     if( dia>fechas(mes,year)){
         dia=1;
         mes++;
         if (mes>12){
            mes=1;
            year++;    
         } 
         

     }
    
    cout <<" Fecha un dia siguiente de la ingresada es: "<< dia<< "/"<<mes<<"/"<<year<<endl;
}
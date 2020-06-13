#include "iostream"

using namespace std;   

float salarioTotal (float tiempos, float extras)// una funcion para el salario total, sin incluir los descuentos
{
    tiempos*=1.75;
    extras*=2.50;
    return tiempos+extras;// retorna la suma de las horasmas las extras 
}
float salariosReal( float total)// funcion para el total real , incluidos los descuentos
{
    double AFP=0.0625,isss=0.04, renta= 0.1;// los valores predeterminados de los descuentos
    isss*=total;
    AFP*=total;
    if (total>500)// para los empleados cuyo sueldo sobrepasa los 500 dolares
    {
        renta*=total;
        total-=renta; // se aplica lo de la renta
    }
    total-=AFP; // de lo contrario si no sobrepasa los 500 dolares no se descontara lo de la renta,pero si lo demas
    total-=isss;
    return total;
}
int main()
{
    float horatrabajada,horaextra,salario_total,salario_real; // float para trabajar con decimales
    int x;

    while (x!=2)// para dar opciones al usuario
    {
        cout<< "1.Introduzca empleado \n2.Terminar";
        cout << " \n Introduzca una opcion: ";
        cin >> x;

        switch(x)
        {
        case 1:
           cout<<" Ingrese las horas trabajadas: \n";
           cin>>horatrabajada;
           cout<< " Ingrese las horas extras: \n";
           cin>> horaextra;
           salario_total=salarioTotal(horatrabajada,horaextra);
           salario_real=salariosReal(salario_total);
           cout<< " El salario total del empleado es: $"<<salario_total<<endl;
           cout <<" El salario real del empleado es: $"<<salario_real<<endl;
           break;
           
           default:
           break;
        }
    }
    return 0;
}
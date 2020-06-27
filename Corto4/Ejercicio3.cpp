#include "iostream"

using namespace std;

void llenarmatriz(float matriz[][5], int cantidad)// definimos el numero de columnas ,ya que seran 5 notas por alumno
{
    float nota;
    for(int i=0;i<cantidad;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"Ingrese la nota "<<(j+1)<<" del alumno "<<(i+1)<<": ";// para que aumente preguntando la nota de cierto alumno
            cin>>nota;
            matriz[i][j]=nota;
        }
        cout<<"\n";// ocupamos para separar las notas de los alumnos
    }
}
void NotaFinal(float matriz[][5], int cantidad)//funcion para determinar si ha Aprobado o Reprobado
{
    float final;
    for(int i=0; i<cantidad;i++)
    {
        for(int j=0; j<5; j++)
        {
            final+=((matriz[i][j])*0.2);// cada nota la multiplicamos por el 20% 
        }
        cout<<"La nota final del estudiante "<<(i+1)<<" es: "<<final<<endl;
        if (final>=6)                                      // si su promedio es mayor o igual a 6 ,ha Aprobado
          cout<<"Haz aprobado, Felicidades :)"<<endl;
        else                                        //de lo contrario lo reprobo si su promedio es menor a 6
          cout<<"Haz reprobado"<<endl;
        final=0;
    }
}
int main()
{
    int alumnos=0;
    cout<<"CONOCER SI HAZ APROBADO O REPROBADO EL CURSO"<<endl;
    cout<<"Ingrese el numero de estudiantes: ";
    cin>> alumnos;
    cout<<"\n";
    float notas[alumnos][5];
    llenarmatriz(notas,alumnos);// solo llamamos ambas funciones
    NotaFinal(notas,alumnos);
    return 0;
}
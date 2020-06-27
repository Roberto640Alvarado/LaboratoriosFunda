#include "iostream"

using namespace std;
float estatura[25];  // ocupamos float por que trabajaremos con numeros decimales
void promedioaltura(float arreglo[],float *total)  //funcion para calcular el promedio
{
    int i=0;
    
    for (i = 0; i< 25; i++){  //utilizamos punteros
        *total +=arreglo[i];
    }
        *total= *total/25;
}
float estaturasArribaAbajo(float arreglo[],int *sobre,int *abajo,float prom){ //funcion para determinar las alturas arriba o abajo de la media
    for(int i=0;i<25;i++){
        if(arreglo[i]>prom)
           *sobre+=1;
        else
         *abajo+=1;
    }
    return 0;
}

int main()
{
    float promedio;
    float Estatura;
    int Arribamedia=0;
    int Abajomedia=0;

    cout<<" INGRESE LAS 25 ALTURAS DE LOS ALUMNOS: "<<endl;

    for(int i=0; i<25;i++){
        cout<< "Ingrese la estatura del alumno "<<(i+1)<<" en metros: ";// para que aumente asta llegar el limite que se ha colocado preguntando sus estaturas
        cin>>Estatura;
        estatura[i]=Estatura;
    }
    promedioaltura(estatura,&promedio);
    cout<< "El promedio de las estaturas de los alumnos es: "<<promedio<<endl;//ocupamos la vfuncion para el calculo de la media

    estaturasArribaAbajo(estatura,&Arribamedia,&Abajomedia,promedio);//determinar si esta arriba o abajo de la media
    cout<< "Hay "<<Arribamedia<<" estatura arriba de la media. "<<endl;
    cout<< "Hay "<<Abajomedia<<" estatura abajo de la media."<<endl;


}


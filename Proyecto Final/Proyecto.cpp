#include "iostream"
using namespace std;

const int longcad = 20;    //Longitud de la cadena 
struct CostoporArticulo{   // Creamos la estructura
  char Articulo[longcad + 1];
  int cantidad;
  float precio;
  float CostoporArticulo;
};

void DatosDelArticulo(CostoporArticulo articulo[],int cantidad)// Creamos la funcion para pedir los datos al usuario
{
      cout<< "\nINGRESE LOS DATOS DEL ARTICULO "<<endl;
      for(int i=0; i< cantidad; i++){
        cin.ignore(100, '\n');   //ignora las entradas hasta 100
        cout<< "Ingrese el nombre del Articulo: ";
        cin.getline(articulo[i].Articulo, 21 , '\n'); //Guardamos los datos en las diferentes variable y arreglo
        cout<< "Ingrese la cantidad del producto: ";
        cin>> articulo[i].cantidad;
        cout<< "Ingrese el Precio Unitario del Articulo: $";
        cin>> articulo[i].precio;
      }
} 

void costoporArticulo(CostoporArticulo articulo[], int cantidad)// Funcion para el calculo total del articulo
{
  for( int i=0; i<cantidad; i++)
    articulo[i].CostoporArticulo=articulo[i].precio*articulo[i].cantidad;
    cout<<"\n";
}

void MostrarDato(CostoporArticulo articulo[],int cantidad) // Funcion para desplegar en la pantalla los datos 
{                                                          // ingresados y el total del articulo
  for( int i=0; i<cantidad; i++){
    cout<< "******FACTURA DE COMPRA*****"<<endl;
     cout<<"Nombre del Articulo: "<<articulo[i].Articulo<<endl;
     cout<< "Cantidad del producto: "<<articulo[i].cantidad<<endl;// llamamos a las variable y arreglo donde estan 
     cout<<"Precio Unitario del Articulo: $"<<articulo[i].precio<<endl;//almacenados los datos antes ingresados
     cout<< "Precio Total: $"<<articulo[i].CostoporArticulo<<endl;
  }
  cout<<"\n";
}
float CostoTotal(CostoporArticulo articulo[],int cantidad)// Funcion de sumatoria de todos los articulos
{
  float Total;
  for(int i=0;i< cantidad; i++){
    Total=articulo[i].CostoporArticulo + Total;
  }
  return Total; // retornamos el total
}

int main()
{
  int Num_Articulos,Total;
  cout<< "Cantidad de Articulos: "<<endl;
  cin>> Num_Articulos;

  CostoporArticulo Guardados[Num_Articulos];// Llamamos a todas las funciones
  DatosDelArticulo(Guardados, Num_Articulos);
  costoporArticulo(Guardados,Num_Articulos);
  MostrarDato(Guardados,Num_Articulos);
  cout<< "El precio Total de su compra es: $"<<CostoTotal(Guardados,Num_Articulos);// llamamos el total de la compra
    return 0;
}
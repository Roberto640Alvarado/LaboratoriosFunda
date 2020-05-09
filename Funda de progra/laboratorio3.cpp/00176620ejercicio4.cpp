#include "iostream"

using namespace std;

int main()
{    
    string producto;
    float cantidad, precio, total;
    cout<< "Introduce el nombre del producto: "<<endl;
    cin>> producto;
    cout<< "Introduce el precio del producto: "<<endl;
    cin>> precio;
    cout<< "Introduce la cantidad del producto: "<<endl;
    cin>> cantidad;
    total= cantidad * precio;
    cout<< "El producto comprado es: "<<producto<<", su precio c/u es $"<< precio<<", la cantidad comprada es de "<<cantidad<<",el total es de "<<total<< endl;

      
    
}
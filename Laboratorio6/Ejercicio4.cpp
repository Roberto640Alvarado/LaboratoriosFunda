#include "iostream"

using namespace std;

void arreglo(int arr[] ,int n)
{
    for(int i =0; i<n ; i++){
        cout<< "Ingrese el numero:\n";
        cin>>arr[i];
    }

}
void sumadearreglos(int arr1[],int arr2[], int n, int resultado[])
{
    for(int i =0; i<n ;i++){
        resultado[i] = arr1[i]+arr2[i];
    }
}
void desplegarresultado(int resultado[], int n)
{
    cout<< "El resultado es:\n";
    for(int i =0; i<n; i++){
        cout<<resultado[i];
    }
}
int main()
{
    int n=5;
    int arr1[n];
    int arr2[n];
    int resultado[n];
    arreglo(arr1,n);
    arreglo(arr2,n);
    sumadearreglos(arr1,arr2,n,resultado);
    desplegarresultado(resultado,n);
}

#include "iostream"
#include "cmath"

using namespace std;

int main()
{
    float r,pi=3.14,perimetro,area;
    cout<< "introduce el radio del circulo: ";
    cin>> r;
    perimetro= 2*pi*r;
    cout<< "El perimetro del circulo es: " << endl << perimetro << endl;
    area= pow(r,2)*pi;
    cout<< "El area del circulo es: " << endl << area << endl;


}
#include <iostream>

using namespace std;

int main ()
{

    setlocale(LC_ALL,"");
    float importeV,descuento,precioFinal;
    cout<<"Ingrese el importe total de la venta: ";
    cin>>importeV;
    cout<<"Ingrese el descuento: ";
    cin>>descuento;
    precioFinal=importeV*(1-(descuento/100));
    cout<<"El precio final es de: "<<precioFinal;
    return 0;
}

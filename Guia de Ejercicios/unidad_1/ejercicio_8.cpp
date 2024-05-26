#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL,"");
    float importeV,descuento,porcentaje;
    cout<<"Ingrese el precio total: ";
    cin>>importeV;
    cout<<"Ingrese el precio con el descuento: ";
    cin>>descuento;
    porcentaje=(100*descuento)/importeV;
    cout<<"El importe a pagar con el descuento es de: "<<descuento<<endl;
    cout<<"El porcentaje que pagó fue el del: "<<porcentaje<<"%.";
    return 0;
}

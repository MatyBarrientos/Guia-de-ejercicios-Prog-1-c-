#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int cantHuevos,caja,huevo,precio;
    cout<<"Ingrese la cantidad de huevos a calcular: ";
    cin>>cantHuevos;
    caja = cantHuevos / 12;
    huevo=cantHuevos%12;
    precio=(1000*caja)+(120*huevo);
    cout<<"La cantidad de huevos en la compra es de: "<<cantHuevos<<" huevos."<<endl<<"El precio a pagar es de: "<<precio<<" $."<<endl<<caja<<" caja/s y "<<huevo<<" huevo/s suelto/s.";
    return 0;
}

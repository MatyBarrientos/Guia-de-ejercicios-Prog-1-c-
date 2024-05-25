#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    float importeVenta,descuento,total;
    cout<<"Ingrese el importe total de la compra: ";
    cin>>importeVenta;
    if(importeVenta<100){
        total=importeVenta*0.95;
    }else if(importeVenta>=100 && importeVenta<=500){
        total=importeVenta*0.90;
    }else{
    total=importeVenta*0.85;}
    cout<<"El total a pagar con descuento es : $"<<total<<"."<<endl<<"El precio original es de: $"<<importeVenta;
    return 0;
}

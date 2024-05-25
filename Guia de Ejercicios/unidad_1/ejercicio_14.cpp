#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    float importeCompra,descuento,descuento_apli,total;
    cout<<"Ingrese el importe de la compra: ";
    cin>>importeCompra;
    cout<<"Ingrese el descuento a aplicar: ";
    cin>>descuento;
    total=(importeCompra*((100-descuento)/100));
    descuento_apli=importeCompra*(descuento)/100;

    cout<<"El total a pagar con descuento es de: "<<total<<" $."<<endl<<"El precio total es de: "<<importeCompra<<" $."<<endl<<"El descuento es de: "<<descuento_apli;
    return 0;
}

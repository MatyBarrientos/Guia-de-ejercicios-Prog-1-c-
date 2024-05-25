#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int importe,billete1000,billete500,billete200,billete100,resto1000,resto500,resto200,resto100;
    cout<<"Ingrese el importe a calcular: ";
    cin>>importe;
    resto1000=importe%1000;
    billete1000=(importe-resto1000)/1000;
    resto500=(resto1000)%500;
    billete500=(resto1000-resto500)/500;
    resto200=resto500%200;
    billete200=(resto500-resto200)/200;
    resto100=resto200%100;
    billete100=(resto200-resto100)/100;
    cout<<"Billetes de 1000: "<<billete1000<<endl<<"Billetes de 500: "<<billete500<<endl<<"Billetes de 200: "<<billete200<<endl<<"Billetes de 100: "<<billete100;
    return 0;
}

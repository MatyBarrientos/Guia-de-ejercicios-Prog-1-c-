#include <iostream>

using namespace std;
/* 3*/
int main()
{
    setlocale(LC_ALL,"");
    int FIJO,ventaAuto,total;
    FIJO=5000;
    cout<<"Ingrese la cantidad de autos vendidos: ";
    cin>>ventaAuto;
    total=(ventaAuto*700)+5000;
    cout<<"El suedo a pagar por los autos vendidos es de : $"<<total;
    return 0;
}

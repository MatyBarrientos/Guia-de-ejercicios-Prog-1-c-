#include <iostream>

using namespace std;
/* 1*/
int main()

{
    setlocale(LC_ALL,"");
    int horasTrabajadas,valorHora,total;

    cout<<"Ingrese la cantidad de hs trabajadas por el operario: ";
    cin>>horasTrabajadas;
    cout<<"Ingrese el valor de la hora trabajada: ";
    cin>>valorHora;
    total=horasTrabajadas*valorHora;
    cout<<"Total a pagar es de: "<<total;
    return 0;
}

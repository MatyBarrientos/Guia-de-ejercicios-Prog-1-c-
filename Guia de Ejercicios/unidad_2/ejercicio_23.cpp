#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int mes,bimestre;
    cout<<"Ingrese el numero de mes a averiguar: ";
    cin>>mes;
    bimestre=(mes-1)/2+1;
    cout<<"El mes "<<mes<<" pertenece al bimestre "<<bimestre;
    return 0;
}

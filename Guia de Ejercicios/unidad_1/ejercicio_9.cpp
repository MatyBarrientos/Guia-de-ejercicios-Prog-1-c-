#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL,"");
    int minutos,horas,cantMinutos;
    cout<<"Ingrese la cantidad de minutos: ";
    cin>>cantMinutos;
    minutos=cantMinutos%60;
    horas=(cantMinutos-minutos)/60;
    cout<<cantMinutos<<" minutos representan: "<<endl<<horas<<" horas con "<<minutos<<" minutos ";
    return 0;
}

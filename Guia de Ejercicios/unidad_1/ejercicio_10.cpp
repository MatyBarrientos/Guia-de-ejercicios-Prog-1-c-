#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int dias,horas,cantHoras;
    cout<<"Ingrese la cantidad de horas: ";
    cin>>cantHoras;
    horas=(cantHoras)%24;
    dias=(cantHoras-horas)/24;

    cout<<cantHoras<<" horas representan: "<<endl<<dias<<" dia/s con "<<horas<<" hora/s ";
    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int cantMinutos,dias,horas,minutos,rHoras;
    cout<<"Ingrese la cantidad de minutos: ";
    cin>>cantMinutos;
    minutos=cantMinutos%60;
    horas=(cantMinutos-minutos)/60;
    rHoras=(horas%24);
    dias=(horas-rHoras)/24;
    cout<<cantMinutos<<" minutos es equivalante a: "<<endl<<dias<<" dia/s "<<rHoras<<" hora/s con "<<minutos<<" minuto/s";
    return 0;
}

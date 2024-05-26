#include <iostream>
#include <locale>

using namespace std;
/*Sigue en construcción. */
int main()
{
    setlocale(LC_ALL,"");
    int numPartido, minJugados,TarjetasA,TarjetasR,goles,NoJugados=0,completoJugado=0, partidoMasGoles,masGoles,contador;
    float promTarjA;
    for(int i=1; i<=19; i++)
    {
        cout<<"Ingrese el número de partido: ";
        cin>>numPartido;
        cout<<"Cuantos minutos jugó en ese partido: ";
        cin>>minJugados;
        cout<<"Ingrese la cantidad de goles convertidos: ";
        cin>>goles;
        cout<<"Ingrese la cantidad de tarjetas Amarillas en ese partido: ";
        cin>>TarjetasA;
        cout<<"Tuvo tarjetas rojas en ese partido: ";
        cin>>TarjetasR;

    }
    return 0;
}

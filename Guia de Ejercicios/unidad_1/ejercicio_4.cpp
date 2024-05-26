#include <iostream>

using namespace std;
/* 4*/
int main()
{
    setlocale(LC_ALL,"");
    int totalAsientos,ocupadosAsientos;
    float OcupadosPorciento,DesocupadosPorciento;
    cout<<"Ingrese la cantidad total de asientos del avion: ";
    cin>>totalAsientos;
    cout<<"Ingrese la cantidad total de asientos ocupados: ";
    cin>>ocupadosAsientos;
    OcupadosPorciento=(ocupadosAsientos*100)/totalAsientos;
    DesocupadosPorciento=100-OcupadosPorciento;
    cout<<"El porcentaje de asientos ocupados es de: "<<OcupadosPorciento<<"%. Y  el porcentaje de libres es de: "<<DesocupadosPorciento<<"%.";


    return 0;
    }



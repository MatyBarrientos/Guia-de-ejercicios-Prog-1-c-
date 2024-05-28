#include <iostream>
#include <locale>

using namespace std;

bool validarFecha(int dia, int mes, int anio);

bool validarDia(int dia, int mes,int anio);
bool validarMes(int mes);
bool validarAnio(int anio);
bool esBiciesto(int anio);

int main() {
    setlocale(LC_ALL,"");

    int dia, mes, anio;
    bool resultado;
    cout<<"Ingresa el día de la fecha: ";
    cin>>dia;
    cout<<"Ingresa el mes: ";
    cin>>mes;
    cout<<"Ingresa el año: ";
    cin>>anio;
    resultado=validarFecha(dia,mes,anio);
    cout<<resultado;

    return 0;
}

bool validarAnio(int anio) {
    return anio>=0 ? true: false;
}

bool validarMes(int mes) {
    return mes>=1 && mes<=12 ? true:false;
}
bool esBiciesto(int anio){
    return (anio % 4 == 0 and (anio % 400 == 0 or anio % 100 != 0));
}

bool validarDia(int dia, int mes,int anio) {
    bool condicion=false;
    switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (dia>=1 and dia<=31)
            condicion=true;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (dia>=1 and dia<=30)
            condicion=true;
        break;
    case 2:
        if ((esBiciesto(anio))&&(dia>=1 and dia<=29))
            condicion=true;
        else if(!esBiciesto(anio)&&(dia>=1 and dia<=28))
            condicion=true;
            break;
    default:
        break;
    }
    return condicion;
}
bool validarFecha(int dia, int mes, int anio) {
    bool day, mounth, year;
    day=validarDia(dia,mes,anio);
    mounth=validarMes(mes);
    year=validarAnio(anio);
    return day && mounth && year;
}

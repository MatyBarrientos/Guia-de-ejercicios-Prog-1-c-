#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

void asignarNombre(int dia, string &nombre);
int main() {
    setlocale(LC_ALL,"");
    int dia;
    string nombre;


    cout<<"Ingrese un valor del 0 al 6: ";
    cin>>dia;

    asignarNombre(dia, nombre);
    cout<<nombre;
    return 0;
}

void asignarNombre(int dia, string &nombre) {
    switch (dia) {
    case 0:
       nombre="Domingo";
        break;
    case 1:
        nombre="Lunes";
        break;
    case 2:
        nombre="Martes";
        break;
    case 3:
        nombre="Miercoles";
        break;
    case 4:
        nombre="Jueves";
        break;
    case 5:
        nombre="Viernes";
        break;
    case 6:
        nombre="Sábado";
        break;

    default:
        break;
    }
}

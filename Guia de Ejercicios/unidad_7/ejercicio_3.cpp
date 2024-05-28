#include <iostream>
#include <locale>
#include "../unidad_7/funciones_guia7/funciones.h"


using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    const int TAM=3;
    int vectorEnteros[TAM];
    int pos;
    cargarVector(TAM, vectorEnteros);
    pos=posicionMayor(TAM, vectorEnteros);
    mostrarVector(TAM, vectorEnteros);

    cout<<"El valor mayor es de: "<<vectorEnteros[pos-1]<<endl;
    cout<<"Su posicion es : "<<pos;


    return 0;
}



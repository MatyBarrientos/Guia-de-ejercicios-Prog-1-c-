#include <iostream>
#include <locale>
#include "../unidad_7/funciones_guia7/funciones.h"


using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int const TAM=5;
    int vectorEnteros[TAM];
    int i, aux, pos;
    cargarVector(TAM,vectorEnteros);

    for (i=0;i<TAM;i++){
            aux=devolverAbsoluto(vectorEnteros[i]);
            vectorEnteros[i]=aux;
    }

    mostrarVector(TAM,vectorEnteros);
    pos=posicionMayor(TAM,vectorEnteros);
    cout<<"El mayor número absoluto es: "<<vectorEnteros[pos-1];


    return 0;
}

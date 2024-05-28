#include <iostream>
#include "../unidad_7/funciones_guia7/funciones.h"
using namespace std;


int main()
{
    setlocale(LC_ALL,"");
    int const TAM=5;
    int vectorEnteros[TAM];
    int resultado;
    cargarVector(TAM, vectorEnteros);
    mostrarVector(TAM, vectorEnteros);
    resultado= promVector(TAM, vectorEnteros);
    cout<<"El promedio de la lista es de: "<<resultado<<endl;
    for (int i=0;i<TAM;i++){
        if(vectorEnteros[i]>resultado){
            cout<<vectorEnteros[i]<<" es mayor que el promedio.";
        }
    }

    return 0;
}

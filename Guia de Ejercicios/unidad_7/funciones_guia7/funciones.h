#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>

using namespace std;
void  cargarVector(int TAM, int vec[]);
void  mostrarVector(int TAM, int vec[]);
int sumatoriaVector(int TAM, int vec[]);
int promVector(int TAM, int vec[]);


void  cargarVector(int TAM, int vec[]) {
    for (int i=0; i<TAM; i++) {
        cout<<"Ingrese el valor: "<<i+1<<" de la lista: ";
        cin>>vec[i];
    }
}
void mostrarVector(int TAM, int vec[]) {
    for (int i=0; i<TAM; i++) {
        if((i!=TAM-1))
            cout<<vec[i]<<",";
        else
            cout<<vec[i]<<"."<<endl;
    }
}

int sumatoriaVector(int TAM, int vec[]) {
    int valor=0, i;
    for(i=0; i<TAM; i++) {
        valor+=vec[i];
    }
    return  valor;
}
int promVector(int TAM, int vec[]) {
    int aux=0,promedio;
    for (int i=0; i<TAM; i++) {
        aux+=vec[i];
    }
    promedio=aux/TAM;
    return promedio;
}

#endif // FUNCIONES_H_INCLUDED

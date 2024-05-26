#include<cstdlib>
#include<iostream>
#include <string>

using namespace std;
/**
Pasaje por referencia
*/

///DECLARACION
bool esPrimo(int numero);
bool esPerfecto(int numero);
bool esPrimoSophieGermain(int numero);
void intercambiarNumeros(int &num1, int &num2);

void cargarVector(int vec[], int tam);
void mostrarVector(int vec[], int tam);
void ponerVectorEn0(int vec[], int tam);

int main() {
     int TAM=6;
    int opcion=1;
    int elementos[TAM];
    while(opcion!=0) {
        system("cls");
        cout<<"----- Menu Vectores ----- "<<endl;
        cout<<"1 - Cargar Vector. "<<endl;
        cout<<"2 - Mostrar Vector. "<<endl;
        cout<<"3 - Poner en 0 el Vector. "<<endl;
        cout<<"0 - Salir. "<<endl;
        cout<<"--------------------------"<<endl;
        cin>>opcion;
        switch (opcion) {
        case 1:
            cargarVector(elementos, TAM);
            break;
        case 2:
            mostrarVector(elementos, TAM);
            break;
        case 3:
            ponerVectorEn0(elementos, TAM);
            break;

        case 0:
            cout<<"Saliendo del programa..."<<endl;
            break;

        default:
            cout<<"Ingrese una opcion correcta."<<endl;
            system("pause");
            break;
        }
    }
    return 0;
}

///DEFINICIÓN
void cargarVector(int vec[],int tam ) {
    int i;
    for (i=0; i<tam ; i++ ) {
        cout<<"Ingrese el elemento "<<i+1<<" del vector: ";
        cin>>vec[i];
    }
    cout<<"Vector correctamente cargado..."<<endl;
}
void ponerVectorEn0(int vec[],int tam ){
    int i;
    for (i=0;i<tam ;i++ ){
        vec[i]=0;
    }
    cout<<"Vector correctamente seteado en 0..."<<endl;
}


void mostrarVector(int vec[],int tam ) {
    int i;
    for (i=0; i<tam ; i++ ) {
        cout<<"Elemento "<<i+1<<" del vector: "<<vec[i]<<endl;
    }
    system("pause");
}

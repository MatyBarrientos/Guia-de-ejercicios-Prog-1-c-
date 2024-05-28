#include <iostream>
#include <locale>

using namespace std;

void  cargarVector(int TAM, int vec[]);
void  mostrarVector(int TAM, int vec[]);
int sumatoriaVector(int TAM, int vec[]);
int main() {
    setlocale(LC_ALL,"");
    int const TAM=5;
    int vInt[TAM];
    int sumatoria;
    cargarVector(TAM, vInt);

    sumatoria=sumatoriaVector(TAM, vInt);
    cout<<"El vector es el siguiente: ";
    mostrarVector(TAM,vInt);

    cout<<"La sumatoria del vector es de: "<<sumatoria;

    return 0;
}

void  cargarVector(int TAM, int vec[]) {
    for (int i=0; i<TAM; i++) {
        cout<<"Ingrese el valor: "<<i+1<<" de la lista: ";
        cin>>vec[i];
    }
}
void mostrarVector(int TAM, int vec[]){
    for (int i=0;i<TAM;i++){
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


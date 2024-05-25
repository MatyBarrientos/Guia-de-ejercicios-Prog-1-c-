#include <iostream>
#include <locale>

using namespace std;
bool esBiciesto(int anio);
int contarBiciestos(int vec[],int TAM);
void cargarFecha(int vec[], int TAM);

int main()
{
    setlocale(LC_ALL,"");
    int fecha, cant;
    const int TAM=10;
    int fechas[TAM];
    cout<<"Ingrese una fecha: ";
    cin>>fecha;
   if(esBiciesto(fecha)){
       cout<<"El año "<<fecha<<" es biciesto."<<endl;
   }else{
       cout<<"El año "<<fecha<<" es biciesto."<<endl;
   }
    cargarFecha(fechas,TAM);
    cant= contarBiciestos(fechas,TAM);
    cout<<"La cantidad de biciestos que hay en la lista es de: "<<cant<<endl;
    cout<<fechas;



    return 0;
}


void cargarFecha(int vec[], int TAM) {
for (int i=0;i<TAM;i++){
    cout<<"Ingrese el valor "<<i+1<<" de la lista de años: ";
    cin >> vec[i];
}
}

int contarBiciestos(int vec[],int TAM){
    int cont=0;
    for (int i=0;i<TAM;i++){
        if(esBiciesto(vec[i])){
            cont++;
        }
    }
    return cont;
}



bool esBiciesto(int anio){
    return (anio % 4 == 0 and (anio % 400 == 0 or anio % 100 != 0));
}

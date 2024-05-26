#include <iostream>
#include <locale>

using namespace std;

///DECLARACION
//tipo de dato que devuelve la funcion
//   nombre de la funcion
//      parámetros que recibe
bool esPrimo(int numero);

int main() {

    int i, num, cantPrimos=0;
    bool resultado;
    for (i=0; i<5 ; i++ ) {
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>num;
        resultado=esPrimo(num);
        if(resultado) {
            cantPrimos++;
        }
    }
    cout<<"La cantidad de primos es de: "<<cantPrimos;

///LLAMADO

    return 0;
}
bool esPrimo(int numero) {
    int i, cantDiv=0;
    bool resultado;
    for (i=1; i<=numero ; i++ ) {
        if(numero%i==0) {
            cantDiv++;
        }
    }
    if(cantDiv==2) {
        cout<<"El numero "<<numero<<" es primo."<<endl;
        resultado=true;
    } else {
        cout<<"El numero "<<numero<<" no es primo."<<endl;
        resultado=false;
    }
}

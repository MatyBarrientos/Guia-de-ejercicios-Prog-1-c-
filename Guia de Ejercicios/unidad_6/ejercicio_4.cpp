#include <iostream>
#include <locale>

using namespace std;
bool esPrimo(int numero);
bool EsPrimoSophieGermain (int valor);

int main() {
    setlocale(LC_ALL,"");
    int num;
    bool almacen;
    cout<<"ingrese un número: ";
    cin>>num;

    almacen=EsPrimoSophieGermain(num);

    if (almacen){
        cout<<"El número "<<num<<" es primo de Sophie Germain.";
    }else{
        cout<<"El número "<<num<<" *No* es primo de Sophie Germain.";
    }

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
    return cantDiv==2;
}
bool EsPrimoSophieGermain (int valor) {
    //declaracion de variables

    int auxiliar;
    bool valorA, valorB;
    auxiliar=(2*valor+1);
//NUM ORIGINAL
    valorA=esPrimo(valor);
//NUM MODIFICADO
    valorB=esPrimo(auxiliar);
//return
        return (valorA && valorB);
}


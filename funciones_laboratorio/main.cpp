#include <iostream>
#include "funciones.h"
using namespace std;




int main(){

    setlocale(LC_ALL,"");
    int  num1, num2,resultado;

    cout<<"Ingrese el 1er n�mero: ";
    cin>>num1;
    cout<<"Ingrese el 2er n�mero: ";
    cin>>num2;

    resultado=CalcularMaximo(num1,num2);
    cout<<"El mayor de los valores ingresados es: "<<resultado;

    return 0;
}





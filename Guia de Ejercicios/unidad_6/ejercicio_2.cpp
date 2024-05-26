#include <iostream>
#include <locale>

using namespace std;
//Punto 2
int CalcularMaximo (int numA,int numB);



int main(){

    setlocale(LC_ALL,"");
    int  num1, num2,resultado;

    cout<<"Ingrese el 1er número: ";
    cin>>num1;
    cout<<"Ingrese el 2er número: ";
    cin>>num2;

    resultado=CalcularMaximo(num1,num2);
    cout<<"El mayor de los valores ingresados es: "<<resultado;

    return 0;
}
int CalcularMaximo(int numA, int numB){
    if(numA>=numB)
        return numA;
    else
        return numB;
}

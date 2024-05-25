#include <iostream>
#include <locale>

using namespace std;
int devolverAbsoluto(int valor);
int CalcularMaximoAbsoluto (int valor1, int valor2);
int main() {
    setlocale(LC_ALL,"");
    int num1,num2, resultado;

    cout<<"Ingrese el valor 1: ";
    cin>>num1;
    cout<<"Ingrese el valor 2: ";
    cin>>num2;
    resultado=CalcularMaximoAbsoluto(num1,num2);
    cout<<"El valor maximo absoluto de los numeros ingresados es: "<<resultado;



    return 0;
}
int CalcularMaximoAbsoluto (int valor1, int valor2) {
    int a,b;
    a=devolverAbsoluto(valor1);
    b=devolverAbsoluto(valor2);
    return a>b? a:b; //Operador ternario, si a es mayor que b.

}
int devolverAbsoluto(int valor) {
    return valor<0 ? -valor : valor;//ternario si es negativo lo multiplico *1;
}



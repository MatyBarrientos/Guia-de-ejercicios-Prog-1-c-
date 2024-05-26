#include <iostream>
#include <locale>

using namespace std;

int contarDigitosRecursivo(int num);
int contarDigitos(int num);

int main() {
    setlocale(LC_ALL,"");
    int num, cantidad;
    cout<<"Ingrese un n�mero: ";
    cin>>num;
    /* cantidad= num == 0 ? 1 : contarDigitosRecursivo(num);
    cout<<cantidad; */
    cantidad= contarDigitos(num);
    cout<<"La cantidad de d�gitos del n�mero: "<<num<<" es de: "<<cantidad;


    return 0;
}
int contarDigitos(int num) {
    int contador = 0;
    if (num == 0) {
        return 1;
    }
    while (num != 0) {
        num /= 10;
        contador++;
    }
    return contador;
}

int contarDigitosRecursivo(int num) {
    return num == 0 ? 0:  1+contarDigitosRecursivo(num / 10);
}

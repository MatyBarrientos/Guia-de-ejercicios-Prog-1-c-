#include <iostream>
#include <cmath>
using namespace std;

bool esNumeroArmstrong(int num);
int contarDigitos(int num);

int main() {
    int numero;
    cout << "Ingrese un n�mero: ";
    cin >> numero;

    if (esNumeroArmstrong(numero)) {
        cout << numero << " es un n�mero Armstrong." << endl;
    } else {
        cout << numero << " no es un n�mero Armstrong." << endl;
    }

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
int calcular(int num, int numCifras) {
    int suma=0,temp;
    temp = num;
    while (temp > 0) {
        int cifra = temp % 10;
        suma += pow(cifra, numCifras);
        temp /= 10;
    }
    return suma;
}
bool esNumeroArmstrong(int num) {
    int original = num;
    int suma;
    int numCifras;

    // Contar el n�mero de cifras
    numCifras=contarDigitos(num);
    suma=calcular(num,numCifras);

    // Desglosar el n�mero y calcular la suma de las potencias de las cifras


    return suma == original;
}

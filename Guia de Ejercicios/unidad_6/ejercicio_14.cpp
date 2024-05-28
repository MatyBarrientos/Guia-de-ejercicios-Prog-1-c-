#include <iostream>
#include <locale>


int devolverAbsoluto(int valor);
float potencia(int a, int b);
float calcularPotencia(int a, int b);
int contarDigitos(int num);
bool esNumeroArmstrong(int num);


using namespace std;
int main() {
    setlocale(LC_ALL,"");
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (esNumeroArmstrong(numero)) {
        cout << numero << " es un número Armstrong." << endl;
    } else {
        cout << numero << " no es un número Armstrong." << endl;
    }

    return 0;
}
int devolverAbsoluto(int valor) {
    return valor<0 ? -valor : valor;//funcion del ej8 para obtener abs
}

float potencia(int a, int b) {
    float i,valor=a;
    for(i=1; i<devolverAbsoluto(b); i++) { //uso la funcion de abs para contemplar los exponentes negativos
        valor*=a;
    }
    return valor;
}


float calcularPotencia(int a, int b) {
    float retorno;
    if (b==0)
        retorno=1;
    else if(b==1)
        retorno=a;
    else if(b<0)
        retorno=(1/potencia(a,b)); //contemplo los exponentes negativos
    else
        retorno=potencia(a,b);

    return retorno;
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
        suma += calcularPotencia(cifra, numCifras);
        temp /= 10;
    }
    return suma;
}
bool esNumeroArmstrong(int num) {
    int original = num;
    int suma;
    int numCifras;

    // Contar el número de cifras
    numCifras=contarDigitos(num);
    suma=calcular(num,numCifras);

    // Desglosar el número y calcular la suma de las potencias de las cifras


    return suma == original;
}

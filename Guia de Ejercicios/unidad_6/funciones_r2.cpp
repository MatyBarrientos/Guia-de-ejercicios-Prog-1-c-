#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Caso base: los dos primeros números de la serie
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    // Caso recursivo: suma de los dos números anteriores
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    cout << "Ingrese la posicion en la serie de Fibonacci: ";
    cin >> num;
    cout << "El numero en la posicion " << num << " de la serie de Fibonacci es " << fibonacci(num) << endl;
    return 0;
}

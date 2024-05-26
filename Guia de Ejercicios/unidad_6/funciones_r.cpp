#include <iostream>
#include <locale>


using namespace std;

int factorial(int n) {
    // Caso base: si n es 0, el factorial es 1
    if (n == 0) {
        return 1;
    }
    // Caso recursivo: n * factorial de (n-1)
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "El factorial de " << num << " es " << factorial(num) << endl;
    return 0;
}

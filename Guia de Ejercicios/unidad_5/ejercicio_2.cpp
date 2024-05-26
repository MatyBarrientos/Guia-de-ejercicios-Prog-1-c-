#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL,"");
    int numero_usuario,cantidad_primos = 0,contador_divisores;

    for (int i=0; i<10 ; i++ ) {
        contador_divisores=0;
        cout<<"Ingrese el valor "<<i+1<<" de la lista: ";
        cin>>numero_usuario;
        for (int j=1; j<=numero_usuario; j++) {
            if(numero_usuario%j==0) {
                contador_divisores++;
            }
        }
        if(contador_divisores==2) {
            cantidad_primos++;
        }
    }
    cout<<"La cantidad de números primos es: "<<cantidad_primos;
    return 0;
}

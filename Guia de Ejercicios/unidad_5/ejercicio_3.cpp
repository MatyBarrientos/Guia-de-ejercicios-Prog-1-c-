#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL,"");
    int numero,contador_divisores;
    int total,contador_primo=0,contador_no_primo=0;
    float porcentaje_primo,porcentaje_no_primo;

    cout<<"Ingrese el primer valor de la lista: ";
    cin>>numero;
    while(numero!=0) {
        contador_divisores=0;
        for(int i=1; i<=numero; i++) {
            if(numero%i==0) {
                contador_divisores++;
            }
        }
        if(contador_divisores==2) {
            contador_primo++;
            cout<<"primo: "<<contador_primo<<endl;

        } else {
            contador_no_primo++;
            cout<<" no primo: "<<contador_no_primo<<endl;
        }
        cout<<"Ingrese el siguiente valor de la lista: ";
        cin>>numero;
    }
    total=contador_no_primo+contador_primo;
    porcentaje_primo=(contador_primo*100)/total;
    porcentaje_no_primo=(contador_no_primo*100)/total;
    cout<<"El porcentaje de números primos es de: %"<<porcentaje_primo<<endl;
    cout<<"El porcentaje de números  'NO' primos es de: %"<<porcentaje_no_primo<<endl;
    return 0;
}

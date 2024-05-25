#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL,"");

    int num,cantidad_perfectos,contador;

    for (int i=1; i<=10 ; i++ ) {
        contador=0;
        cout<<"Ingrese el valor "<<i<<" de la lista: ";
        cin>>num;
        for (int j=1; j<num ; j++ ) {
            if(num%j==0) {
                contador+=j;
            }
        }
        if(contador==num) {
            cantidad_perfectos++;
        }
    }
    cout<<"La cantidad de perfectos es de: "<<cantidad_perfectos<<endl;



    return 0;
}

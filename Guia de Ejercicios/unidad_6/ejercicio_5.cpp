#include <iostream>
#include <locale>

using namespace std;

int redondearFloat(float num);

int main() {
    setlocale(LC_ALL,"");
    int resultado;
    float num;
    cout<<"Ingrese el número: ";
    cin>>num;
    resultado=redondearFloat(num);
    cout<<resultado;

    return 0;
}

int redondearFloat(float num) {
<<<<<<< HEAD
    int numAux=num;

    if(num-numAux>=0.5) {
        return (numAux+1);
    } else {
        return numAux;
}}
=======
    int numAux;
    numAux = num;

    return(num-numAux>=0.5)?(numAux+1):numAux;}
>>>>>>> notebook

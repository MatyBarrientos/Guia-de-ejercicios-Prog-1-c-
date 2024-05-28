#include <iostream>
#include <locale>

using namespace std;
int devolverAbsoluto(int valor);
float calcularPotencia(int a,int b);
float potencia(int a,int b);

int main() {
    setlocale(LC_ALL,"");
    int a, b;
    float pow;
    cout<<"Ingrese A: ";
    cin>>a;
    cout<<"Ingrese B: ";
    cin>>b;
    pow=calcularPotencia(a,b);
    cout<<a<<" elevado a la "<<b<<" es: "<<pow;


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

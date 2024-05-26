#include <iostream>
#include <locale>

using namespace std;

bool esPar(int valor);
int main() {

    int num;
    cout<<"Ingrese un valor: ";
    cin>>num;
    if (esPar)
        cout<<"El numero "<<num<<" es primo.";
    else
        cout<<"El numero "<<num<<" *NO* es primo.";
    return 0;
}
bool esPar(int valor){
    if (valor%2==0)
        return true;
    else
        return false;
}

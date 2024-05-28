#include <iostream>
#include <locale>

using namespace std;

bool esPerfecto(int num);

int main() {
    setlocale(LC_ALL,"");
    int num, contador=0;
    while(true){
        cout<<"Ingrese el valor a verificar: ";
        cin>>num;
        if(num==0)
            break;
        if(esPerfecto(num)){
            contador++;
            cout<<"Es perfecto"<<endl;}
        }
    cout<<"La cantidad de números perfectos es de: "<<contador;
    return 0;
}

bool esPerfecto(int num) {
    int i, sumatoria=0;
    for(i=1; i<num; i++) {
        if (num%i==0)
            sumatoria+=i;
    }
    return sumatoria==num;
}

bool recursivoPerfecto(int num){
    }

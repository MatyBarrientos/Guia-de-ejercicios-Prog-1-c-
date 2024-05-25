#include <iostream>

using namespace std;

bool esPrimo(int num);
int main(){
    bool muestra;
    int num;
    cout<<"Ingrese un número para ver si es primo: ";
    cin>>num;
    muestra= esPrimo(num);
    if(muestra){
        cout<<"Es primo";
    }else{
        cout<<"No es primo";
    }
    return 0;
}
bool esPrimo(int num){
    int div=0,i;
    for (i=1;i<=num;i++){
        if(num%i==0)
            div++;
    }
    return div==2;
}
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num1,num2,diferencia;
    cout<<"Ingrese el 1er nro: ";
    cin>>num1;
    cout<<"Ingrese el 2do nro: ";
    cin>>num2;
    if(num1>num2){
        diferencia=num1-num2;
    }else{
        diferencia=num2-num1;
    }
    cout<<"La diferencia absoluta entre los número: "<<num1<<" y "<<num2<<" es : "<<diferencia;
    return 0;
}

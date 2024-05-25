#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num1,num2,num3,num4,num5,minimo,maximo;
    cout<<"Ingrese el 1er num: ";
    cin>>num1;
    cout<<"Ingrese el 2do num: ";
    cin>>num2;
    cout<<"Ingrese el 3er num: ";
    cin>>num3;
    cout<<"Ingrese el 4to num: ";
    cin>>num4;
    cout<<"Ingrese el 5to num: ";
    cin>>num5;
    maximo=num1;
    minimo=num1;
    if(num2>maximo){
        maximo=num2;
    }
    if(num3>maximo){
    maximo=num3;
    }
    if(num4>maximo){
    maximo=num4;
    }
    if(num5>maximo){
    maximo=num5;
    }
    if (num2<minimo){
        minimo=num2;
    }
    if (num3<minimo){
        minimo=num3;
    }
    if (num4<minimo){
        minimo=num4;
    }
    if (num5<minimo){
        minimo=num5;
    }
    cout<<"El menor es: "<<minimo<<endl<<"El mayor es: "<<maximo;
    return 0;
}

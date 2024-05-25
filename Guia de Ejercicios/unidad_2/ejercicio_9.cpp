#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num1,num2,num3;
    cout<<"Ingrese el 1er num: ";
    cin>>num1;
    cout<<"Ingrese el 2do num: ";
    cin>>num2;
    cout<<"Ingrese el 3er num: ";
    cin>>num3;
    if(num1>num2 and num1>num3){
        cout<<num1<<" es el mayor de los 3 ingresados.";
    }else if(num2>num1 and num2>num3){
        cout<<num2<<" es el mayor de los 3 ingresados.";
    }else{cout<<num3<<" es el mayor de los 3 ingresados.";
    }
    return 0;
}

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
    if(num1==num2 and num1==num3){
        cout<<"Los 3 numeros son iguales.";
    }
    return 0;
}

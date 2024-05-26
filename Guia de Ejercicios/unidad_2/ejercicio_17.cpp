#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
        int num1,num2,num3,num4;
    cout<<"Ingrese el 1er num: ";
    cin>>num1;
    cout<<"Ingrese el 2do num: ";
    cin>>num2;
    cout<<"Ingrese el 3er num: ";
    cin>>num3;
    cout<<"Ingrese el 4to num: ";
    cin>>num4;
    if((num1<=num2)and(num2<=num3)and(num3<=num4)){
        cout<<"Los números ingresados están ordenados.";
    }else{
        cout<<"Los números ingresados no están ordenados.";
    }
    return 0;
}

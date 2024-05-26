#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num1,num2;
    cout<<"Ingrese el 1er nro: ";
    cin>>num1;
    cout<<"Ingrese el 2do nro: ";
    cin>>num2;
    if(num2%num1==0){
        cout<<"El primer número "<<num1<<" es multiplo del 2do "<<num2;
    }
    return 0;
}

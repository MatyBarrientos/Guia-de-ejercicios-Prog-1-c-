#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num;
    cout<<"Ingrese un Nro: ";
    cin>>num;
    if(num%2==0){
        cout<<"El número "<<num<<" es par.";
    }else{
        cout<<"El número "<<num<<" es impar.";
    }
    return 0;
}

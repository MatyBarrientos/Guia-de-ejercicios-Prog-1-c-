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
        cout<<"El n�mero "<<num<<" es par.";
    }else{
        cout<<"El n�mero "<<num<<" es impar.";
    }
    return 0;
}

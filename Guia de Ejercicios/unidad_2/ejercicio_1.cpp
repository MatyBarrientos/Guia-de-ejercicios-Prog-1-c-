#include <iostream>
/*#include <locale>*/

using namespace std;

int main()
{
    /*setlocale(LC_ALL,"");*/
    int num;
    cout<<"Ingrese un Nro: ";
    cin>>num;
    if(num>0){
        cout<<"El n�mero "<<num<<" es positivo.";
    }
    return 0;
}

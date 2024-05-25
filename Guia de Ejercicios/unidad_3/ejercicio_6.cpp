#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i,num,cantidad,positivos=0;
    cout<<"Ingrese la cantidad de numeros a ingresar: ";
    cin>>cantidad;
    for (i=0;i<cantidad;i++){
        cout<<"Ingrese un número: ";
        cin>>num;
        if(num>0){
            positivos++;
        }
    }cout<<positivos;
    return 0;
}

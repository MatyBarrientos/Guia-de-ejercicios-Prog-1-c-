#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num, maximo,minimo;
    cout<<"Ingrese el primer valor de la lista: ";
    cin>>num;
    maximo=num;
    minimo=num;
    while(num!=0)
    {
        if(num>maximo)
        {
            maximo=num;
        }
        else if(num< minimo)
        {
            minimo=num;
        }
        cout<<"Ingrese 0 para finalizar!!! "<<endl;
        cout<<"Ingrese el siguiente valor de la lista: ";
        cin>>num;
    }
    cout<<"El minimo valor ingresado fue el: "<<minimo<<endl;
    cout<<"El máximo valor ingresado fue el: "<<maximo<<endl;

    return 0;
}

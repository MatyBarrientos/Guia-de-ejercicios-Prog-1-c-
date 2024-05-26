#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num,maximo,maxPos,contador=1;

    cout<<"Ingrese el primer valor de la lista: ";
    cin>>num;
    maximo=num;
    maxPos=contador;
    while(num!=0)
    {
        cout<<"Ingrese el siguiente valor de la lista: ";
        cin>>num;
        contador++;
        if(num>maximo)
        {
            maximo=num;
            maxPos=contador;
        }
    }
    cout<<"El mayor valor de los ingresados es: "<<maximo<<endl;
    cout<<"En la posición "<<maxPos;

    return 0;
}

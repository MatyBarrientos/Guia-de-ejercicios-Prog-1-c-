#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i, num, maximo, pos;

    for(i=1; i<=10; i++)
    {
        cout<<"Ingrese el valor n�mero "<<i<<":";
        cin>>num;
        if (i==1)
        {
            maximo=num;
            pos=i;
        }
        else
        {
            if (num>maximo)
            {
                maximo=num;
                pos=i;
            }
        }
    }
    cout<<"El mayor n�mero es el: "<<maximo<<endl<<"La posici�n en la lista es la n�mero: "<<pos;
    return 0;
}

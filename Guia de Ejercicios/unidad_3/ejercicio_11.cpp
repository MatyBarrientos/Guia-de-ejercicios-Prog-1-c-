#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i, num, maximo, minimo;

    for(i=1; i<=10; i++)
    {
        cout<<"Ingrese el valor n�mero "<<i<<":";
        cin>>num;
        if (i==1)
        {
            maximo=num;
        }
        else
        {
            if (num>maximo)
            {
                maximo=num;
            }
        }
        if (i==1)
        {
            minimo=num;
        }
        else
        {
            if (num<minimo)
            {
                minimo=num;
            }
        }
    }
    cout<<"El mayor n�mero es el: "<<maximo<<endl<<"El menor n�mero es el: "<<minimo;
    return 0;
}

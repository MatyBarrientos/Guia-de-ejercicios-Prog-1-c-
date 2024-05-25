#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i, num, maximo;

    for(i=1; i<=10; i++)
    {
        cout<<"Ingrese el valor número "<<i<<":";
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
    }
    cout<<"El mayor número es el: "<<maximo<<endl;
    return 0;
}

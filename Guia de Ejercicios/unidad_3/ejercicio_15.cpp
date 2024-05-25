#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i, num,auxiliar;
    float bandera=true;
    for(i=0; i<8; i++)
    {
        cout<<"Ingrese el valor "<<i+1<<" del conjunto:";
        cin>>num;
        if(i==0)
        {
            auxiliar=num;
        }
        if(num>=auxiliar)
        {
            auxiliar=num;
        }
        else
        {
            bandera=false;
        }
    }
    if(bandera)
    {
        cout<<"El conjunto está ordenado.";
    }
    else
    {
        cout<<"El conjunto no esta ordenado.";
    }
    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i,num,acumulador=0;
    cout<<"Ingrese un n�mero para ver si es perfecto o no: ";
    cin>>num;
    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            acumulador+=i;
        }
    }
    if(acumulador==num)
    {
        cout<<"El n�mero "<<num<<" es perfecto.";
    }
    else
    {
        cout<<"El n�mero "<<num<<" no es perfecto.";
    }
    return 0;
}

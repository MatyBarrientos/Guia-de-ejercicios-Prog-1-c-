#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i,num,acumulador=0;
    cout<<"Ingrese un número para ver si es perfecto o no: ";
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
        cout<<"El número "<<num<<" es perfecto.";
    }
    else
    {
        cout<<"El número "<<num<<" no es perfecto.";
    }
    return 0;
}

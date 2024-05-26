#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num, cantDiv=0;

    cout<<"Ingrese un número: ";
    cin>>num;
    for (int i=1; i<num; i++)
    {
        if(num%i==0 and i%2==0)
        {
            cout<<i<<" , ";
        }
    }
    if (num%2==0)
    {
        cout<<num<<".";
    }
    else
    {
        cout<<num<<" no tiene divisores pares. ";
    }
    return 0;
}

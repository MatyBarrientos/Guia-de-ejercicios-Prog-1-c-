#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num, cantDiv=0;
    cout<<"Ingrese un n�mero:  ";
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            cantDiv++;
        }
    }
    if(cantDiv==2)
    {
        cout<<num<<" es n�mero primo.";
    }
    else
    {
        cout<<num<<" no es primo.";
    }
    return 0;
}

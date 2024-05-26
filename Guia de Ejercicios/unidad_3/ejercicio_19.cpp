#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num,cantDiv=0;

    cout<<"Ingrese un número: ";
    cin>>num;
    for (int i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            cantDiv++;
        }
    }
    cout<<num<<" tiene "<<cantDiv<<" divisores.";
    return 0;
}

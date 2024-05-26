#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i,num1,num2;
    cout<<"Ingrese el primer número: ";
    cin>>num1;
    cout<<"Ingrese el 2do número: ";
    cin>>num2;
    if(num1<num2)
    {
        for(i=num1; i<=num2; i++)
        {
            cout<<i<<endl;
        }
    }
    else
    {
        for(i=num2; i<=num1; i++)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}

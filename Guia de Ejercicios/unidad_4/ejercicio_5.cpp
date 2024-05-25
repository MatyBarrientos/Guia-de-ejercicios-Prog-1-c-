#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num1,num2,mayor,menor;
    cout<<"Ingrese el primer valor: ";
    cin>>num1;
    cout<<"Ingrese el primer valor: ";
    cin>>num2;
    if(num1>num2)
    {
        mayor=num1;
        menor=num2;
    }
    else
    {
        mayor=num2;
        menor=num1;
    }
    while(menor<=mayor)
    {
        cout<<menor;
        menor++;
    }
    return 0;
}

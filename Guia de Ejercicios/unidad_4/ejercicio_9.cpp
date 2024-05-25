#include <iostream>
#include <locale>

using namespace std;
bool esPerfecto(int valor);

int main()
{
    setlocale(LC_ALL,"");
    int num;


    cout<<"Ingrese el numero a evaluar: ";
    cin>>num;

    while(num!=0)
    {
        if(esPerfecto(num))
        {
            cout<<"El número "<<num<<" es perfecto."<<endl;
        }
        else
        {
            cout<<"El número "<<num<<" *No* es perfecto."<<endl;
        }
        cout<<"Ingrese el siguiente numero a evaluar: ";
        cin>>num;
    }



    return 0;
}

bool esPerfecto(int valor)
{
    int i,cont=0;
    for (i=1; i<valor; i++)
        if(valor%i==0)
            cont+=i;
    return valor==cont;
}


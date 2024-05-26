#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num,maxPar;
    bool bandera=true;
    for(int i=1; i<=10; i++)
    {
        cout<<"Ingrese el número "<<i<<" de la lista: ";
        cin>>num;
        if(num%2==0)
        {
            if(bandera)
            {
                maxPar=num;
                bandera=false;
                cout<<"El mayor par por el momento es: "<<maxPar<<endl;
            }
            else if(num>maxPar)
            {
                maxPar=num;
                cout<<"El mayor par por el momento es: "<<maxPar<<endl;
            }

        }
    }
    cout<<"El mayor de los pares es: "<<maxPar;
    return 0;
}

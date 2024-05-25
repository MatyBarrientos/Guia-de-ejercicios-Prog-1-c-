#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    bool banderaPar=true;
    int i,j, num, posicionPar,posicionPrimo,par,primo, auxiliarPrimo=0;
    for (i=1; i<=7; i++)
    {
        cout<<"Ingrese un valor: ";
        cin>>num;
        for(j=1; j<=num; j++)
        {
            if(num%j==0)
            {
                auxiliarPrimo++;
            }
        }
        if(auxiliarPrimo==2)
        {
            cout<<"primo"<<endl;
            primo=num;
            posicionPrimo=i;
        }

        if (banderaPar and(num%2==0))
        {

            par=num;
            posicionPar=i;
            banderaPar=false;

        }

    }
    cout<<"El primer par es: "<<par<<" y su posicion es: "<<posicionPar<<endl;
    cout<<"El ultimo primo es: "<<primo<<" y su posicion es: "<<posicionPrimo<<endl;
    return 0;
}

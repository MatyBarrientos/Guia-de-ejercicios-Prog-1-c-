#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int numeros[10];
    int maximo_negativo;
    int minimo_positivo;


    for (int i = 0; i < 10; ++i)
    {
        cout << "Ingrese el valor "<<i+1<<": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        if (numeros[i] < 0)
        {
            maximo_negativo = numeros[i];
            break;
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        if (numeros[i] > 0)
        {
            minimo_positivo = numeros[i];
            break;
        }
    }


    for (int i = 0; i < 10; ++i)
    {
        if (numeros[i] < 0 && numeros[i] > maximo_negativo)
        {
            maximo_negativo = numeros[i];
        }
        else if (numeros[i] > 0 && numeros[i] < minimo_positivo)
        {
            minimo_positivo = numeros[i];
        }
    }

    cout << "Maximo Negativo: " << maximo_negativo << endl;
    cout << "Minimo Positivo: " << minimo_positivo << endl;
    return 0;
}

/* 12 (con banderas)
int main()
{
    setlocale(LC_ALL,"");
    int i,num,maxN,minP;
    bool banderaP=true,banderaN=true;
    for (i=0; i<10; i++)
    {
        cout<<"Ingrese el valor "<<i+1<<" : ";
        cin>>num;
        if(num>0)
        {
            if(banderaP)
            {
                minP=num;
                banderaP=false;
            }
            else
            {
                if(num<minP)
                {
                    minP=num;
                }
            }
        }
        else if(num<0)
        {
            if(banderaN)
            {
                maxN=num;
            }
            else
            {
                if(num>maxN)
                {
                    maxN=num;
                }
            }
        }
    }
    cout<<"El mayor de los negativos es: "<<maxN<<endl;
    cout<<"El menor de los positivos es: "<<minP<<endl;
    return 0;
}
*/

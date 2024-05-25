#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    for (int i=1; i<=10; i++)
    {
        int contador=0;
        for (int j=1; j<=i; j++)
        {
            if( i%j==0)
            {
                contador++;
            }

        }
        if (contador==2)
        {
            cout<<i<<" es primo"<<endl;
        }
    }

    return 0;
}

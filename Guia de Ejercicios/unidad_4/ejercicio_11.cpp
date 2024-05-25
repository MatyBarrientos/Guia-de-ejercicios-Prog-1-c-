#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num,maxNeg,minPos;
    bool banderaPos=false,banderaNeg=false;
    cout<<"Ingrese 0 para finalizar el ingreso de números!!!"<<endl;
    cout<<"Ingrese el primer valor de la lista: ";
    cin>>num;
    while(num!=0)
    {
        if(num>0)
        {
            if(!banderaPos)
            {
                minPos=num;
                banderaPos=true;
            }
            else if(num<minPos)
            {
                minPos=num;
            }
        }
        else
        {
            if(!banderaNeg)
            {
                maxNeg=num;
                banderaNeg=true;
            }
            else if(num>maxNeg)
            {
                maxNeg=num;
            }
        }

        cout<<"Ingrese el siiguiente valor de la lista: ";
        cin>>num;

    }
    cout<<"El máximo valor de los negativos es: "<<maxNeg<<endl;
    cout<<"El mínimo valor de los positivos es: "<<minPos<<endl;


    return 0;
}

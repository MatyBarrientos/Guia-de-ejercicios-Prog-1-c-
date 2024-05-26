#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i,num,promedio;
    float positivo=0,negativo=0,cero=0;

    for (i=0; i<10; i++)
    {
        cout<<"Ingrese un número: ";
        cin>>num;
        if(num==0)
            cero++;
        else if(num>0)
            positivo++;
        else
            negativo++;
    }
    cout<<"porcentaje de positivos: %"<<(positivo*100)/10<<endl;
    cout<<"porcentaje de negativos: %"<<(negativo*100)/10<<endl;
    cout<<"porcentaje de cero: %"<<(cero*100)/10<<endl;
    return 0;
}

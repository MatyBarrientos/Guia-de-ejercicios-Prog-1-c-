#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i,num,positivo=0,negativo=0,cero=0;

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
    cout<<"cantidad de positivos: "<<positivo<<endl;
    cout<<"cantidad de negativos: "<<negativo<<endl;
    cout<<"cantidad de cero: "<<cero<<endl;

    return 0;
}

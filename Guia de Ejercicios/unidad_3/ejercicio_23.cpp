#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i,num, cantDuplas=0, contImpar=0;
    for(i=1; i<=10; i++)
    {
        cout<<"Ingrese el valor " <<i<<" dela lista: ";
        cin>>num;
        if(num%2!=0)
        {
            contImpar++;
            if(contImpar==2)
            {
                cantDuplas++;
                contImpar=1;
            }
            else
            {
                contImpar=0;
            }
            cout<<"la cantidad de duplas hasta ahora es: "<<cantDuplas<<endl;


        }
        cout<<"la cantidad de duplas es: "<<cantDuplas;
    }
    return 0;
}

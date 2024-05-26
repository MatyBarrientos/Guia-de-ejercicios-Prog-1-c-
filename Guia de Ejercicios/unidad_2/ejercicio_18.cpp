#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int kilovatio,total;
    cout<<"Ingrese la cantidad de KW consumidos: ";
    cin>>kilovatio;
    if(kilovatio<=100)
    {
        total=kilovatio*10;
    }
    else if(kilovatio>100 and kilovatio<=200)
    {
        total=(1000)+((kilovatio-100)*12);
    }
    else
    {
        total=(2200)+((kilovatio-200)*15);
    }
    cout<<"El total a pagar por el consumo es de: $ "<<total;
    return 0;
}

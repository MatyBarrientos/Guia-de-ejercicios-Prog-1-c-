#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int yearUser;
    cout<<"Ingrese el año a verificar si es bisiesto: ";
    cin>>yearUser;
    if((yearUser%4==0)and (yearUser%100!=0 or yearUser%400==0))
    {
        cout<<yearUser<<" es bisiesto.";
    }
    else
    {
        cout<<yearUser<<" no es bisiesto.";
    }
    return 0;
}

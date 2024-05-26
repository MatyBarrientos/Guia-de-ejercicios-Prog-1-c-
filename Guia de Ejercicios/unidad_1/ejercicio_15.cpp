#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int tempMax,tempMin,amplitud;
    cout<<"Ingrese la temperatura minima: ";
    cin>>tempMin;
    cout<<"Ingrese la temperatura maxima: ";
    cin>>tempMax;
    amplitud=tempMax-tempMin;
    cout<<"La amplitud termica es de: "<<amplitud;
    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int contador=0;
    while(contador<=10)
    {
        cout<<contador<<endl;
        contador++;
    }
    cout<<"Fin de la iteración.";
    return 0;
}

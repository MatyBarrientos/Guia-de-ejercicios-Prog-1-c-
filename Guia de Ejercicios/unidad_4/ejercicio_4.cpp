#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int numero,contador=1;
    cout<<"Ingrese un valor: ";
    cin>>numero;
    while(contador<=numero)
    {
        cout<<contador<<endl;
        contador++;
    }
    cout<<"Fin de la iteración.";
    return 0;
}

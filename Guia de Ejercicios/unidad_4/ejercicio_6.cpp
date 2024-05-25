#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int numero,contP=0,contN=0;

    cout<<"Ingrese 0 para finalizar."<<endl;
    cout<<"Ingrese el primer valor de la lista: ";
    cin>>numero;
    while(numero!=0)
    {
        if (numero>0)
        {
            contP++;

        }
        else if (numero<0)
        {
            contN++;

        }
        cout<<"Cantidad de positivos: "<<contP<<endl; //un poquito de feedback
        cout<<"Cantidad de negativos: "<<contN<<endl; //un poquito de feedback
        cout<<"Ingrese el siguiente valor de la lista: ";
        cin>>numero;
    }
    cout<<"La cantidad de positivos es de: "<<contP<<endl<<"La cantidad de negativos es de: "<<contN<<endl;
    return 0;
}

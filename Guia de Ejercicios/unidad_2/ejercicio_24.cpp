#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int mes,tri;
    cout<<"mes nro: ";
    cin>>mes;

    tri=mes%3;
    if(tri!=0)
    {
        tri++;
    }
    cout<<tri;
    return 0;
}
/*int obtenerTrimestre(int mes)
{
    return (mes-1)/3+1;
}// queria probar las funciones

int main()
{
    int mes;
    cout<<"Ingrese el mes: ";
    cin>>mes;
    cout<<"El mes "<<mes<<" pertenece al trimestre: "<<obtenerTrimestre(mes);
    return 0;
}*/

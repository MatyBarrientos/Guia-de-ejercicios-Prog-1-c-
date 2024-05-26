#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int carteraNegra,carteraBlanca,carteraMarron,carteraGris,negraStock,blancaStock,marronStock,grisStock,totalVendidas;

    blancaStock=0,negraStock=0,marronStock=0,grisStock=0;
    cout<<"Pedido Nro 1."<<endl;
    cout<<"Ingrese la cantidad de carteras 'Blancas' que desea pedir: ";
    cin>>carteraBlanca;
    blancaStock+=carteraBlanca;

    cout<<"Ingrese la cantidad de carteras 'Negras' que desea pedir: ";
    cin>>carteraNegra;
    negraStock+=carteraNegra;

    cout<<"Ingrese la cantidad de carteras 'Marron' que desea pedir: ";
    cin>>carteraMarron;
    marronStock+=carteraMarron;

    cout<<"Ingrese la cantidad de carteras 'Gris' que desea pedir: ";
    cin>>carteraGris;
    grisStock+=carteraGris;

    cout<<"Pedido Nro 2."<<endl;
    cout<<"Ingrese la cantidad de carteras 'Blancas' que desea pedir: ";
    cin>>carteraBlanca;
    blancaStock+=carteraBlanca;

    cout<<"Ingrese la cantidad de carteras 'Negras' que desea pedir: ";
    cin>>carteraNegra;
    negraStock+=carteraNegra;

    cout<<"Ingrese la cantidad de carteras 'Marron' que desea pedir: ";
    cin>>carteraMarron;
    marronStock+=carteraMarron;

    cout<<"Ingrese la cantidad de carteras 'Gris' que desea pedir: ";
    cin>>carteraGris;
    grisStock+=carteraGris;

    cout<<"Pedido Nro 3."<<endl;
    cout<<"Ingrese la cantidad de carteras 'Blancas' que desea pedir: ";
    cin>>carteraBlanca;
    blancaStock+=carteraBlanca;

    cout<<"Ingrese la cantidad de carteras 'Negras' que desea pedir: ";
    cin>>carteraNegra;
    negraStock+=carteraNegra;

    cout<<"Ingrese la cantidad de carteras 'Marron' que desea pedir: ";
    cin>>carteraMarron;
    marronStock+=carteraMarron;

    cout<<"Ingrese la cantidad de carteras 'Gris' que desea pedir: ";
    cin>>carteraGris;
    grisStock+=carteraGris;

    totalVendidas=marronStock+negraStock+blancaStock+grisStock;

    cout<<"Quedaron un total de "<<45-blancaStock<<" carteras blancas."<<endl
        <<"Quedaron un total de "<<50-negraStock<<" carteras negras."<<endl
        <<"Quedaron un total de "<<40-marronStock<<" carteras marrones."<<endl
        <<"Quedaron un total de "<<49-grisStock<<" carteras grises."<<endl;

    cout<<"El total de carteras vendidas es de: "<<totalVendidas<<endl;

    if(blancaStock==0 )
    {
        cout<<"No se han vendido carteras del color blanco";
    }
    if(negraStock==0)
    {
        cout<<"No se han vendido carteras del color negro";
    }
    if(marronStock==0)
    {
        cout<<"No se han vendido carteras del color marron";
    }
    if(grisStock==0)
    {
        cout<<"No se han vendido carteras del color gris";
    }
    return 0;
}

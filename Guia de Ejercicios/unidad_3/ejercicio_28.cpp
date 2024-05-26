#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int numMov, numMovMayor, dia, diaMayor,contadorE=0,contadorD=0,contador10;
    char tipo;
    float importe,importeMayor,saldo=50000, extraPorciento, depoPorciento;
    bool bandera=true;

    cout<<"Bienvenido su saldo en cuenta es de: "<<saldo<<endl;
    for (int i=1; i<=5; i++)
    {
        numMov=1000+i;
        cout<<"Desea realizar una extracción ('E') o un depósito ('D')."<<endl<<"Elija su opción: ";
        cin>>tipo;
        cout<<"Ingrese día del mes: ";
        cin>>dia;
        if(dia==10)
            contador10++;
        if(tipo=='E' or tipo=='e')
        {
            cout<<"Ingrese el importe a extraer: ";
            cin>>importe;
            saldo-=importe;
            cout<<"El importe actual es de: $ "<<saldo<<endl;
            cout<<"Numero de moviento en la cuenta: "<<numMov<<endl;
            contadorE++;
        }
        if(tipo=='D' or tipo=='d')
        {
            cout<<"Ingrese el importe a depositar: ";
            cin>>importe;
            saldo+=importe;
            cout<<"El importe actual es de: $ "<<saldo<<endl;
            cout<<"Numero de moviento en la cuenta: "<<numMov<<endl;
            contadorD++;
            if(bandera)
            {
                importeMayor=importe;
                diaMayor=dia;
                numMovMayor=numMov;
                bandera=false;
            }
            else if(importe>importeMayor)
            {
                importeMayor=importe;
                diaMayor=dia;
                numMovMayor=numMov;
            }
        }
    }
    extraPorciento=(100*contadorE)/5;
    depoPorciento=(100*contadorD)/5;
    cout<<"El saldo final de su cuenta es de: "<<saldo<<endl;
    cout<<"Porcentaje de Extraciones: "<<extraPorciento<<endl;
    cout<<"Porcentaje de Depositos: "<<depoPorciento<<endl;
    cout<<"El depósito de mayor importe fue de: $"<<importeMayor<<endl<<"El día: "<<diaMayor<<endl<<"Con el número de movimiento: "<<numMovMayor<<endl;
    cout<<"Los movimientos del día 10 fueron en total: "<<contador10;
    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i;
    float sueldo;
    float sueldoMax=-1, sueldoMin=-1, sueldoProm;
    int may500k=0;
    float acumSueldos=0;

    for(i=1; i<11; i++)
    {
        cout<<"Ingrese el sueldo del empleado/la empleada "<<i<<": $";
        cin>>sueldo;
        if(i==1)
        {
            sueldoMax=sueldo;
            sueldoMin=sueldo;
        }
        if(sueldo>sueldoMax)
        {
            sueldoMax=sueldo;
        }
        else if(sueldo<sueldoMin)
        {
            sueldoMin=sueldo;
        }
        if(sueldo>500000)
        {
            may500k++;
        }
        ///SINTAXIS PARA EL USO DE ACUMULADOR
        acumSueldos+=sueldo; ///acumSueldos=acumSueldo+sueldo;
        cout<<"Valor del acumulador: "<<acumSueldos<<endl;

    }
    cout<<"El sueldo maximo fue de: $"<<sueldoMax<<endl;
    cout<<"El sueldo minimo fue de: $"<<sueldoMin<<endl;
    sueldoProm=acumSueldos/i;
    cout<<"El sueldo promedio fue de: $"<<sueldoProm<<endl;
    cout<<"La cantidad de sueldos mayores a $500.000.- es de: "<<may500k<<endl;
    return 0;
}

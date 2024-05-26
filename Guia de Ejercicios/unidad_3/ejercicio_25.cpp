#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int legajo, sueldo,mayorS,mayorL;
    for (int i=1; i<=4; i++)
    {
        cout<<"Ingrese el legajo del empleado número "<<i<<": ";
        cin>>legajo;
        cout<<"Ingrese el sueldo del empleado "<<legajo<<": ";
        cin>>sueldo;
        if(i==1)
        {
            mayorL=legajo;
            mayorS=sueldo;
        }
        else if (sueldo>mayorS)
        {
            mayorS=sueldo;
            mayorL=legajo;
        }

    }
    cout<<"El empleado con el mayor sueldo es: "<<mayorL;
    return 0;
}

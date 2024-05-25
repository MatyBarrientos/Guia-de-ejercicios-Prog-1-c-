#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL,"");
    int reca1,reca2,reca3,reca4;
    float totalSuma,promedio, porcenttaje1,porcenttaje2,porcenttaje3,porcenttaje4;
    cout<<"Ingrese la reca de la semana 1: ";
    cin>>reca1;
    cout<<"Ingrese la reca de la semana 2: ";
    cin>>reca2;
    cout<<"Ingrese la reca de la semana 3: ";
    cin>>reca3;
    cout<<"Ingrese la reca de la semana 4: ";
    cin>>reca4;
    totalSuma=reca1+reca2+reca3+reca4;
    promedio=totalSuma/4;
    porcenttaje1=(100*reca1)/totalSuma;
    porcenttaje2=(100*reca2)/totalSuma;
    porcenttaje3=(100*reca3)/totalSuma;
    porcenttaje4=(100*reca4)/totalSuma;
    cout<<"El promedio es de: "<<promedio<<"."<<endl;
    cout<<"El porcentaje de venta de la semana 1 representa el: "<<porcenttaje1<<"%."<<endl;
    cout<<"El porcentaje de venta de la semana 2 representa el: "<<porcenttaje2<<"%."<<endl;
    cout<<"El porcentaje de venta de la semana 3 representa el: "<<porcenttaje3<<"%."<<endl;
    cout<<"El porcentaje de venta de la semana 4 representa el: "<<porcenttaje4<<"%."<<endl;
    return 0;
}

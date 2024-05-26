#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL,"");
    int alfajorA,alfajorB,alfajorC,totalAlfajores;
    float porcentajeA,porcentajeB,porcentajeC;
    cout<<"Ingrese la cantidad de alfajores de la marca A: ";
    cin>>alfajorA;
    cout<<"Ingrese la cantidad de alfajores de la marca B: ";
    cin>>alfajorB;
    cout<<"Ingrese la cantidad de alfajores de la marca C: ";
    cin>>alfajorC;
    totalAlfajores=(alfajorA+alfajorB+alfajorC);
    porcentajeA=(float)(100*alfajorA)/totalAlfajores;
    porcentajeB=(float)(100*alfajorB)/totalAlfajores;
    porcentajeC=(float)(100*alfajorC)/totalAlfajores;
    cout<<"El porcentaje de A es de: "<<porcentajeA<<"%."<<endl;
    cout<<"El porcentaje de B es de: "<<porcentajeB<<"%."<<endl;
    cout<<"El porcentaje de C es de: "<<porcentajeC<<"%."<<endl;
    return 0;
}

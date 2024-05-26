#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int nota1,nota2,nota3,nota4,aux;
    cout<<"Ingrese la 1er nota: ";
    cin>>nota1;
    cout<<"Ingrese la 2da nota: ";
    cin>>nota2;
    cout<<"Ingrese la 3er nota: ";
    cin>>nota3;
    cout<<"Ingrese la 4ta nota: ";
    cin>>nota4;
    aux=0;

    if(nota1>=4)
    {
        aux++;
    }
    if(nota2>=4)
    {
        aux++;
    }
    if(nota3>=4)
    {
        aux++;
    }
    if(nota4>=4)
    {
        aux++;
    }

    if(nota1>=7 and nota2>=7 and nota3>=7 and nota4>=7)
    {
        cout<<"El alumno promocionó.";
    }
    else if(aux>=3)
    {
        cout<<"Debe rendir examen final.";
    }
    else if(aux>=1)
    {
        cout<<"Debe rendir parciales.";
    }
    else
    {
        cout<<"El alumno debe recursar la materia.";
    }
    return 0;
}

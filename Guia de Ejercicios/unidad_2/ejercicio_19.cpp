#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int cantHoras, urgente, total;
    char tipo;
    bool urgenteBool;
    cout << "Ingrese 'C' para seleccionar C/C++." << endl
         << "Ingrese '#' para seleccionar C#." << endl
         << "Ingrese 'P' para seleccionar Python." << endl
         << "Ingrese 'G' para seleccionar Go";
    cout << endl
         << "Ingrese el lenguaje en cual se trabajó: ";
    cin >> tipo;
    cout << "Ingrese la cantidad de horas implemenadas para el trabajo: ";
    cin >> cantHoras;
    cout << "Fue un trabajo de urgencia? (0 = no / 1 = si):";
    cin >> urgente;
    if (urgente == 1)
        urgenteBool = true;
    else
        urgenteBool = false;

    switch (tipo)
    {
    case 'C':
    case 'c':
        total = cantHoras * 7500;
        break;
    case '#':
        total = cantHoras * 6100;
        break;
    case 'P':
    case 'p':
        total = cantHoras * 5400;
        break;
    case 'G':
    case 'g':
        total = cantHoras * 5000;
        break;
    }
    if (urgenteBool)
        total += total * 1.2;

    cout << "El total a cobrar por el proyecto es : $ " << total;
    return 0;
}

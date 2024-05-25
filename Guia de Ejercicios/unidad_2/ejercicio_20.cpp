#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int ageUser1, ageUser2, ageUser3, ageUser4, ageUser5;
    float contador1, contador2, contador3, contador4, acumulador, promedio; //acumulador sirve para ir recolectando las altutas y promedio es para el promedio (cuack)
    float sizeUser1, sizeUser2, sizeUser3, sizeUser4, sizeUser5;

    cout << "Ingrese la edad del 1er usuario: ";
    cin >> ageUser1;
    cout << "Ingrese la altura del 1er usuario: ";
    cin >> sizeUser1;
    cout << "Ingrese la edad del 2do usuario: ";
    cin >> ageUser2;
    cout << "Ingrese la altura del 2do usuario: ";
    cin >> sizeUser2;
    cout << "Ingrese la edad del 3er usuario: ";
    cin >> ageUser3;
    cout << "Ingrese la altura del 3er usuario: ";
    cin >> sizeUser3;
    cout << "Ingrese la edad del 4to usuario: ";
    cin >> ageUser4;
    cout << "Ingrese la altura del 4to usuario: ";
    cin >> sizeUser4;
    cout << "Ingrese la edad del 5to usuario: ";
    cin >> ageUser5;
    cout << "Ingrese la altura del 5to usuario: ";
    cin >> sizeUser5;

    if (ageUser1 > 30 && sizeUser1 >= 1.8)
        contador1++;
    if (ageUser2 > 30 && sizeUser2 >= 1.8)
        contador1++;
    if (ageUser3 > 30 && sizeUser3 >= 1.8)
        contador1++;
    if (ageUser4 > 30 && sizeUser4 >= 1.8)
        contador1++;
    if (ageUser5 > 30 && sizeUser5 >= 1.8)
        contador1++;

    if (ageUser1 > 30)
    {
        acumulador += sizeUser1;
        contador2++;
    }
    if (ageUser2 > 30)
    {
        acumulador += sizeUser2;
        contador2++;
    }
    if (ageUser3 > 30)
    {
        acumulador += sizeUser3;
        contador2++;
    }
    if (ageUser4 > 30)
    {
        acumulador += sizeUser4;
        contador2++;
    }

    if (ageUser5 > 30)
    {
        acumulador += sizeUser5;
        contador2++;
    }
    promedio = acumulador / contador2;

    if (sizeUser1 >= 1.7 && sizeUser1 <= 1.8)
        contador3=contador3+1;
    if (sizeUser2 >= 1.7 && sizeUser2 <= 1.8)
        contador3=contador3+1;
    if (sizeUser3 >= 1.7 && sizeUser3 <= 1.8)
        contador3=contador3+1;
    if (sizeUser4 >= 1.7 && sizeUser4 <= 1.8)
        contador3=contador3+1;
    if (sizeUser5 >= 1.7 && sizeUser5 <= 1.8)
        contador3=contador3+1;

    if (ageUser1 == 20 || ageUser1 == 30 || ageUser1 == 40)
        contador4++;
    if (ageUser2 == 20 || ageUser2 == 30 || ageUser2 == 40)
        contador4++;
    if (ageUser3 == 20 || ageUser3 == 30 || ageUser3 == 40)
        contador4++;
    if (ageUser4 == 20 || ageUser4 == 30 || ageUser4 == 40)
        contador4++;
    if (ageUser5 == 20 || ageUser5 == 30 || ageUser5 == 40)
        contador4++;

    cout << "la cantidad con más de 30 años y que miden  más 1.8 mts es de: " << contador1 << endl
         << "El promedio de alturas de los mayores de 30 años es de: " << promedio << endl
         << "La cantidad de personas que miden entre 1.7 mts y 1.8 mts es de: " << contador3 << endl
         << "Por ultimo, la cantidad de personas que tienen '20','30','40' años es de: " << contador4 << endl;
    return 0;
}

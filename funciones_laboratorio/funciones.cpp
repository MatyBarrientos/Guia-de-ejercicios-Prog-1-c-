#ifndef FUNCIONES_CPP_INCLUDED
#define FUNCIONES_CPP_INCLUDED

#include <iostream>
#include <locale>

using namespace std;

int CalcularMaximo (int numA,int numB);


int CalcularMaximo(int numA, int numB){
    if(numA>=numB)
        return numA;
    else
        return numB;
}

#endif // FUNCIONES_CPP_INCLUDED

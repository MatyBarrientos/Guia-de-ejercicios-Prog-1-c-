#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


using namespace std;
//punto 1
bool esPrimo(int numero);
bool esPrimo(int numero){
    int i, cantDiv=0;
    for (i=1;i<=numero ;i++ ){
        if(numero%i==0){
            cantDiv++;
        }
    }
    if(cantDiv==2){
        cout<<"El numero "<<numero<<" es primo."<<endl;
        return true;
    }else{
        cout<<"El numero "<<numero<<" no es primo."<<endl;
        return false;
    }
}
//punto 1
//Punto 2
int CalcularMaximo (int numA,int numB);

int CalcularMaximo(int numA, int numB){
    if(numA>=numB)
        return numA;
    else
        return numB;
}
//Punto 2

#endif // FUNCIONES_H_INCLUDED

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num1,num2,num3,num4,num5,cero,positivo,negativo;
    cout<<"Ingrese el 1er num: ";
    cin>>num1;
    cout<<"Ingrese el 2do num: ";
    cin>>num2;
    cout<<"Ingrese el 3er num: ";
    cin>>num3;
    cout<<"Ingrese el 4to num: ";
    cin>>num4;
    cout<<"Ingrese el 5to num: ";
    cin>>num5;
    cero=0;
    positivo=0;
    negativo=0;
    if(num1<0){
    negativo=negativo+1;
    }else if(num1>0){
    positivo=positivo+1;
    }else{
    cero=cero+1;
    }
    if(num2<0){
    negativo=negativo+1;
    }else if(num2>0){
    positivo=positivo+1;
    }else{
    cero=cero+1;
    }
    if(num3<0){
    negativo=negativo+1;
    }else if(num3>0){
    positivo=positivo+1;
    }else{
    cero=cero+1;
    }
    if(num4<0){
    negativo=negativo+1;
    }else if(num4>0){
    positivo=positivo+1;
    }else{
    cero=cero+1;
    }
    if(num5<0){
    negativo=negativo+1;
    }else if(num5>0){
    positivo=positivo+1;
    }else{
    cero=cero+1;
    }
    cout<<"la cantidad de números iguales a cero es: "<<cero<<endl<<"Los números positivos son: "<<positivo<<endl<<"Los números negativos son: "<<negativo;
    return 0;
}

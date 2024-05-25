#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int lad1,lad2,lad3;
    cout<<"Ingrese el 1er lado: ";
    cin>>lad1;
    cout<<"Ingrese el 2do lado: ";
    cin>>lad2;
    cout<<"Ingrese el 3er lado: ";
    cin>>lad3;
    if(lad1!=lad2 and lad1!=lad3 and lad2!=lad3 ){
        cout<<"El triangulo es Escaleno";
    }else if (lad1==lad2 and lad1==lad3){
        cout<<"El triangulo es Equilatero";
    }else{
        cout<<"Es isósceles el triangulo.";}
    return 0;
}

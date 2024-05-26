#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int frascos,pildoras;
    float betamol,micilina,aSinitico;
    cout<<"Ingrese la cantidad de frasco a calcular: ";
    cin>>frascos;
    pildoras=frascos*75;
    betamol=pildoras*45;
    micilina=pildoras*(2000);
    aSinitico=pildoras*7;
    cout<<"Cantidad de miligramos de betamol: "<<betamol<<endl;
    cout<<"Cantidad de miligramos de micilina: "<<(float)micilina<<endl;
    cout<<"Cantidad de miligramos de acido sinitico: "<<aSinitico<<endl;
    return 0;
}

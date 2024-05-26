#include <iostream>
#include <locale>

using namespace std;
void imprimirLineaHorizontal();

int main() {
    setlocale(LC_ALL,"");
    int num, maxPar,maxImpar;
    bool banderaPos, banderaNeg;
    float  negativoPorciento,positivoPorciento;
    float contadorPositivo,contadorNegativo;
    int contador=0;

    for (int i=1; i<=3 ; i++ ) {
        cout<<"Ingrese el primer valor del grupo "<<i<<" :";
        cin>>num;
        contadorNegativo=0;
        contadorPositivo=0;
        banderaPos=true;
        banderaNeg=true;

        while(num!=0) {
            if(num>0) {
                contadorPositivo++;
                contador++;
            } else {
                contadorNegativo++;
            }
            if(num%2==0) {
                if(banderaPos) {
                    banderaPos=false;
                    maxPar=num;
                } else if(num>maxPar) {
                    maxPar=num;
                }
            } else {
                if(banderaNeg) {
                    banderaNeg=false;
                    maxImpar=num;
                } else if(num>maxImpar) {
                    maxImpar=num;
                }
            }
            cout<<"Ingrese el siguiente valor del grupo "<<i<<" :";
            cin>>num;

        }

        imprimirLineaHorizontal();
        cout<<"El mayor de los pares en el grupo "<<i<<" es: "<<maxPar<<endl;
        cout<<"El mayor de los impares en el grupo "<<i<<" es: "<<maxImpar<<endl;
        imprimirLineaHorizontal();
        negativoPorciento=(contadorNegativo*100)/(contadorNegativo+contadorPositivo);
        positivoPorciento=(contadorPositivo*100)/(contadorNegativo+contadorPositivo);
        imprimirLineaHorizontal();
        cout<<"El porcentaje de positivos en el grupo "<<i<<" es: "<<positivoPorciento<<endl;
        cout<<"El porcentaje de negativos en el grupo "<<i<<" es: "<<negativoPorciento<<endl;
        imprimirLineaHorizontal();

    }
    cout<<"La cantidad de positivos en todos los grupos es: "<<contador<<endl;
    return 0;
}


void imprimirLineaHorizontal() {
    cout<<"---------------------------------------------"<<endl;
}

#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL,"");

    int num;
    int i,j,k,h;
    /*Punto A*/
    int sumatoria,contadorPerf,contadorNoPerf,bandAlt,contG=0;
    /* Punto B*/
    int contadorPrimo, contadorNoPrimo, total, porcenPrimo, porcenNoprimo,cd;
    for (i=1; i<=5; i++) {

        /*Punto A*/
        contadorPerf=0;
        contadorNoPerf=0;
        bandAlt=1;
        /*Punto B*/
        contadorNoPrimo=0;
        contadorPrimo=0;

        for (j=1; j<=3; j++) {
            cout<<"Ingrese el valor "<<j<<" del grupo nro "<<i<<" :";
            cin>>num;
            sumatoria=0;
            cd=0;

            for (k=1; k<=num-1; k++) {

                if(num%k==0) {
                    sumatoria+=k;
                }
            }
            if(sumatoria==num) {
                contadorPerf++;
                contadorNoPerf=0;
            } else {
                contadorNoPerf++;
                contadorPerf=0;
            }
            if ((contadorPerf>=2) or (contadorNoPerf>=2)) {
                bandAlt=0;
            }
            for(h=1; h<=num; h++) {
                if(num%h==0) {
                    cd++;
                }
            }
            if(cd==2) {
                contadorPrimo++;
            } else {
                contadorNoPrimo++;
            }
        }
        if(bandAlt==1) {
            contG++;
            /*cout<<"feedback, contador de grupo."<<contG<<endl;*/
        }
        total=contG;

    }
    cout<<"La cantidad de grupos con numeros intercalados (perfectos/ no perfectos) es de "<<contG;

    return 0;
}

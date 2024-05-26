#include <iostream>
#include <locale>

using namespace std;

int pedirEntero();

void imprimirIneaHorizontal();

bool devolverPrimo(int num);


int main() {
    setlocale(LC_ALL,"");
    int i,num;
    //Variables punto a
    int  grupoGanador,contadorImparPos,contadorRegular,total;
    float porcentajeRegular, porcentajeImparespos,porcentajeAnterior;
    bool banderaGrupo=true;
    //variable punto b
    bool banderaPrimo;
    int primo,ultimoPrimo,contador,primoPos;
    //variable punto c
    bool orden;
    int auxiliarNum, contadorOrden=0;

    for(i=1; i<=3; i++) {
        contador=0;
        contadorImparPos=0;
        contadorRegular=0;
        banderaPrimo=true;
        contador=1;
        orden=true;
        cout<<"Ingresa el  1ero valor del grupo "<<i<<": ";
        num=pedirEntero();
        while(num!=0) {
            if(num%2!=0 and num>0) {
                contadorImparPos++;
            } else {
                contadorRegular++;
            }
            primo=devolverPrimo(num);
            if(primo) {
                banderaPrimo=false;
                ultimoPrimo=num;
                primoPos=contador;
            }

            if(contador==1) {
                auxiliarNum=num;
            } else {
                if(num<auxiliarNum) {
                    auxiliarNum=num;
                } else {
                    orden=false;
                }
            }
            cout<<"Ingrese el siguiente valor del grupo "<<i<<" :";
            num=pedirEntero();
            contador++;



        }
        total=contadorImparPos+contadorRegular;
        porcentajeImparespos=(contadorImparPos*100)/total;
        porcentajeRegular=(contadorRegular*100)/total;


        if(porcentajeImparespos>porcentajeRegular) {
            if(banderaGrupo) {
                banderaGrupo=false;
                grupoGanador=i;
                porcentajeAnterior=porcentajeImparespos;

            } else if(porcentajeImparespos>porcentajeAnterior) {
                grupoGanador=i;
                porcentajeAnterior=porcentajeImparespos;

            }
        } else if(banderaGrupo) {
            grupoGanador=0;
            porcentajeAnterior=0;
        }
        imprimirIneaHorizontal();
        if(!banderaPrimo) {
            cout<<"El ultimo primo es el: "<<ultimoPrimo<<", en la posición: "<<primoPos<<"."<<endl;
        } else {
            cout<<"En este grupo no hubo números primos."<<endl;
        }
        imprimirIneaHorizontal();

        if(orden)
            contadorOrden++;

    }


    imprimirIneaHorizontal();
    if(!banderaGrupo)
        cout<<"Grupo ganador: "<<grupoGanador<<" con un :% "<<porcentajeAnterior<<endl;
    else
        cout<<"Ningun grupo cumple con las condiciones.(tener en su mayoria numeros impares postivos) "<<endl;

    imprimirIneaHorizontal();
    cout<<"La cantidad de grupos ordenados es de: "<<contadorOrden;


    return 0;
}

int pedirEntero() {
    int num;
    cin>>num;
    return num;
}
void imprimirIneaHorizontal() {
    cout<<"---------------------------------------------------------------"<<endl;
}
bool devolverPrimo(int num) {
    int i,div=0;
    bool respuesta;
    for (i=1; i<=num; i++) {
        if(num%i==0) {
            div++;
        }
    }
    if(div==2) {
        respuesta=true;
    } else {
        respuesta=false;
    }
    return respuesta;
}

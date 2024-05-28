#include <iostream>
#include <locale>

using namespace std;

void obtenerNaipe(int id,int &nroNaipe,string &palo);
void obetenerNumeroNaipe(int id, int &nroNaipe);
int convertirNumero(int id, string &palo);
void obetenerPaloNaipe(int id,string &palo);

int main() {
    setlocale(LC_ALL,"");
    int id, NumNaipe;
    string paloNaipe;
    while(true){
    cout<<"Ingrese un número del 1 al 40 y te retornará un naipe: ";
    cin>>id;
    obtenerNaipe(id,NumNaipe,paloNaipe);
    cout<<"tu carta es "<<NumNaipe<<" de "<<paloNaipe<<"."<<endl;
    if(id==0)
        break;
    }

    return 0;
}
void obtenerPaloNaipe(int id, string &palo) {
    /**
    *@brief obtengo un id y en base a eso establezco un palo
    *@param id es el número del usuario
    *@param palo es el palo que se obtendrá en base al numero del usuario
    */

    if (id>=1 and id<=10) {
        palo="espada";
    } else if (id>=11 and id<=20) {
        palo="basto";
    } else if (id>=21 and id<=30) {
        palo="copa";
    } else if (id>=31 and id<=40) {
        palo="oro";
    }
}
int convertirNumero(int id){
    /**
    *@brief obtengo un numero del 1 al 40
    *@param id es el número del usuario
    *@return num es la conversión de id a un numero de la baraja (1 al 12 sin 8 y 9)
    */

    int num;
    if ( id>=1 && id<=10)
            num=id;
    else if (id<=20)
            num=id-10;
    else if (id<=30)
            num=id-20;
    else if (id<=40)
            num=id-30;
    return num;
}
void obtenerNumeroNaipe(int id, int &nroNaipe) {
    /**
    *@brief de un vector cargado con los numeros de la baraja se obtiene un resultado en base al n
    *@param id es el número del usuario
    *@param nroNaipe es el valor que se obtendrá en base al id
    *@return num es la conversión de id a un numero de la baraja (1 al 12 sin 8 y 9)
    */

    int vec[10]={1,2,3,4,5,6,7,10,11,12};
    nroNaipe=vec[convertirNumero(id)-1];
}

void obtenerNaipe(int id,int &nroNaipe,string &palo) {
    obtenerPaloNaipe(id,palo);
    obtenerNumeroNaipe(id, nroNaipe);
}

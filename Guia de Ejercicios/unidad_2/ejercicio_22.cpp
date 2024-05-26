#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int ALQUILER,carameloP,mantenimientoC,presupuesto,costo;

    cout<<"Ingrese el monto del presupuesto inicial: ";
    cin>>presupuesto;
    cout<<"Indique la cantidad de caramelos a porducir: ";
    cin>>carameloP;
    ALQUILER=100000;
    mantenimientoC=50000*(carameloP/1000);
    costo=ALQUILER+(carameloP*2.50)+mantenimientoC;

    //cout<<costo<<endl; esta linea es para verificar que esté bien la cuenta.

    if (presupuesto>=costo)
    {
        cout<<"El presupuesto es sufiente para cubrir los costos de: "<<costo<<endl;
    }
    else
    {
        cout<<"El presupuesto no es suficiente, necesita un crédito de : $"<<costo-presupuesto<<endl;
    }
    return 0;
}

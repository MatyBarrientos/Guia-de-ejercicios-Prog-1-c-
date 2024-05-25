#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i,num,primero,segundo,anteUltimo=0,ultimo;
    bool banderaPrimero=true,banderaSegundo=true,banderaAnte=true,banderaUltimo=true;
    for(i=0; i<8; i++)
    {
        cout<<"Ingrese el valor "<<i+1<<" del listado: ";
        cin>>num;
        if(num%2!=0)
        {
            if(banderaPrimero)
            {
                primero=num;
                banderaPrimero=false;
            }
            else if(banderaSegundo)
            {
                segundo=num;
                banderaSegundo=false;
            }
            else if(banderaUltimo)
            {
                ultimo=num;
                banderaUltimo=false;
            }
            else if(banderaAnte)
            {
                anteUltimo=ultimo;
                ultimo=num;

            }
        }
    }
    cout<<primero<<endl<<segundo<<endl<<anteUltimo<<endl<<ultimo;
    return 0;
}

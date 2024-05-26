#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i,num,max1,max2;
    for(i=1; i<=5; i++)
    {
        cout<<"Ingrese el valor "<<i<<" de la lista:";
        cin>>num;
        if(i==1)
        {
            max2=num;
            max1=num;
        }
        else
        {
            if(num>max1)
            {
                max2=max1;
                max1=num;
            }
            else if(num>max2 or i==2)
            {
                max2=num;
            }

        }
    }
    cout<<max1<<endl<<casiMayor;
    return 0;
}

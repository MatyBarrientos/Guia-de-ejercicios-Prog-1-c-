#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num;

    cout<<"Ingrese un número: ";
    cin>>num;
    for (int i=1; i<num; i++)
    {
        if(num%i==0)
        {
            cout<<i<<" , ";
        }
    }
    cout<<num<<".";
    return 0;
}

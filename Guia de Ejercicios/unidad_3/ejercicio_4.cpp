#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i, num;
    cout<<"Ingrese un numero: ";
    cin>>num;

    for(i=1; i<=num; i++ )
    {
        cout<<i<<endl;
    }
    return 0;
}

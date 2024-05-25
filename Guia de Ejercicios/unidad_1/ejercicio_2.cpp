#include <iostream>

using namespace std;

/* 2*/
int main()
{
    setlocale(LC_ALL,"");
    int n1,n2,na;
    cout<<"Ingrese el valor de A: ";
    cin>>n1;
    cout<<"Ingrese el valor de B: ";
    cin>>n2;


    na=n1;
    n1=n2,n2=na;
    cout<<n1 <<", "<<n2;

    return 0;
}

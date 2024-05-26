#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num1,num2,num3,medio;
    cout<<"Ingrese el 1er num: ";
    cin>>num1;
    cout<<"Ingrese el 2do num: ";
    cin>>num2;
    cout<<"Ingrese el 3er num: ";
    cin>>num3;
    if((num1>num2 and num1<num3) or (num1>num3 and num1<num2)){
        medio=num1;
    }else if((num2>num1 and num2<num3) or (num2>num3 and num2<num1)){
        medio=num2;
    }else if((num3>num1 and num3<num2) or (num3>num2 and num3<num1)){
        medio=num3;
    }
    cout<<"El medio es: "<<medio;


    return 0;
}

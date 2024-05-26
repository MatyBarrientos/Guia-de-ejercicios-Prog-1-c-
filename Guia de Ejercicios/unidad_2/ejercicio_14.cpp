#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int dayUser,monthUser,yearUser,dayNow,monthNow,yearNow,ageUser;
    cout<<"Ingrese el día de nacimiento: ";
    cin>>dayUser;
    cout<<"Ingrese el mes de nacimiento: ";
    cin>>monthUser;
    cout<<"Ingrese el año de nacimiento: ";
    cin>>yearUser;
    cout<<"Ingrese el día de la fecha actual: ";
    cin>>dayNow;
    cout<<"Ingrese el mes de la fecha actual: ";
    cin>>monthNow;
    cout<<"Ingrese el año de la fecha actual: ";
    cin>>yearNow;
    if((monthUser>=monthNow) && (dayUser>=dayNow))
    {
        ageUser=(yearNow-yearUser)-1; //revisar
    }
    else
    {
        ageUser=(yearNow-yearUser); //revisar
    }
    cout<<"La edad del usuario es: "<<ageUser;
    return 0;
}

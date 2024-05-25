#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int day,dayMax,dayMin,dayTemp,mist,mistView=0,rainDay=0,rainDayNo=0;
    float temp,vKm,mlRain,amplitud;

    for (int i=1; i<=15; i++)
    {
        cout<<"Ingrese la temperatura del día "<<i<<" :";
        cin>>dayTemp;
        cout<<"Ingrese los milimitros de lluvia de ese día: ";
        cin>>mlRain;
        cout<<"Ingrese  la visivilidad en km: ";
        cin>>mist;
        if(i==1)
        {
            day=i;
            dayMax=dayTemp;
            dayMin=dayTemp;
        }
        else if(dayTemp>dayMax)
        {
            dayMax=dayTemp;
            day=i;
        }
        else if(dayTemp<dayMin)
        {
            dayMin=dayTemp;
        }
        if(mist<2)
        {
            mistView++;
        }
        if(rainDay>0)
        {
            rainDay++;
        }
        else
        {
            rainDayNo++;
        }
    }
    amplitud=dayMax-dayMin;
    cout<<"El día con mayor temperatura: "<<day<<endl;
    cout<<"La amplitud termica es: "<<amplitud<<endl;
    cout<<mistView<<" fueron los días con neblina."<<endl;
    if(rainDay>rainDayNo)
    {
        cout<<"Fue una quincena lluviosa"<<endl;
    }
    else if(rainDay>=5)
    {
        cout<<"Fue una quincena húmeda."<<endl;
    }
    else
    {
        cout<<"Fue una quincena seca."<<endl;
    }

    return 0;
}

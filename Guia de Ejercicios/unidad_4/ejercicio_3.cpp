#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int iterador=20;
    while(iterador>0)
    {
        cout<<iterador<<endl;
        iterador--;

    }
    return 0;
}

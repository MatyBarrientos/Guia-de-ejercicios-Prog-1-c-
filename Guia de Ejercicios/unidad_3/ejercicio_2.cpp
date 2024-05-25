#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i;
    for(i=1; i<20; i+=3 )
    {
        cout<<i<<endl;
    }
    return 0;
}

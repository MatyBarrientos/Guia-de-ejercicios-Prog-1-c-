#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i;
    for (i=0; i<10; i++)
    {
        cout<<i<<endl;
    }
    return 0;
}

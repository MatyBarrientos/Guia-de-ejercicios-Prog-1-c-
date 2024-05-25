#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int i;
    for (i=20; i>0; i--)
    {
        cout<<i<<endl;
    }
    return 0;
}

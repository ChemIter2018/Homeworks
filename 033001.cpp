#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y;
    cin>>x>>y;
    for (int i = 1; i < x; i++)
    {
        if(i*(x-i) == y)
        {
            cout << i << " " << x - i;
            return 0;
        }
    }
    cout << "no";
    return 0;
}
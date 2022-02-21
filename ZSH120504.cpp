#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b;
    c = a;
    for(int i = 2; i <= b; i++)
    {
        c = c%1000 * a;
    }
    cout << c%1000 << endl;
    return 0;
}
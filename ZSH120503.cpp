#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, x = 3;
    cin >> a >> b >> c;
    while(true)
    {
        if((a%x == b%x) && (a%x == c%x) && (c%x == b%x)) break;
        x += 2;
    }
    cout << x << endl;
    return 0;
}
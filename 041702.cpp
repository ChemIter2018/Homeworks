#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, e;
    double d;
    for (int i = 1001; i < 10000; i = i + 11)
    {
        a = i/1000;
        b = i/100%10;
        c = i/10%10;
        d = sqrt(b*10 + c);
        e = d;
        if(b + c == a && d == e) cout << i << endl;
    }
    return 0;
}
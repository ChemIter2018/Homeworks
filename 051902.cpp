#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c;
    double d, x1, x2;
    cin >> a >> b >> c;
    d = pow(b,2) - 4 * a * c;
    if(d > 0)
    {
        x1 = ((-1) * b + sqrt(d)) / (2 * a);
        x2 = ((-1) * b - sqrt(d)) / (2 * a);
        printf("%.3f", x1);
        cout << " ";
        printf("%.3f", x2);
    }
    else if(d == 0)
    {
        x1 = x2 = (-1) * b / (2 * a);
        printf("%.3f", x1);
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
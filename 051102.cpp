#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    double a, b, c, s, area;
    cin >> a >> b >> c;
    if(a+b>c && a+c>b && b+c>a)
    {
        s = (a + b + c) / 2.0;
        area = sqrt(s*(s - a)*(s - b)*(s - c));
        printf("%.2f", area);
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

double arctanx(double x)
{
    double result = x;
    double tempValue, n = 3.0;
    int m = -1;
    while (true)
    {
        tempValue = pow(x, n)/n;
        result = result + m * tempValue;
        n += 2;
        m = m * (-1);
        if(pow(x, n)/n < 1e-6) break;
    }
    return result;
}

int main()
{
    double pi;
    pi = 6 * arctanx(1.0/sqrt(3.0));
    printf("%.5lf", pi);
    return 0;
}
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

double arctanx(double x)
{
    double result;
    result = x - pow(x, 3)/3.0 + pow(x, 5)/5.0 - pow(x, 7)/7.0;
    return result;
}

int main()
{
    double pi;
    pi = 6 * arctanx(1.0/sqrt(3.0));
    printf("%.5lf", pi);
    return 0;
}
#include<iostream>
#include<cstdio>
using namespace std;
double fun(int x, int n)
{
    if(n==0) return 1;
    else if (n==1) return 2*x;
    else return 2 * x * fun(x, n-1) - 2 * (n - 1) * fun(x, n - 2);
}

int main()
{
    printf("%.2f\n",fun(3, 2));
    return 0;
}
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    int m = -1;
    float r = 1;
    cin>>n;
    for (int i = 2; i <= n; i++)
    {
        r = r + m*(1.0/n);
        m = m * (-1);
    }
    printf("%.3f",r);
    return 0;
}
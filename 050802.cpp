#include<iostream>
#include<cstdio>
using namespace std;
int fun(int x)
{
    if(x==0 || x==1) return 3;
    else return x - fun(x-2);
}

int main()
{
    printf("%d\n",fun(9));
    return 0;
}
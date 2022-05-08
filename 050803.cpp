#include<iostream>
#include<cstdio>
using namespace std;
int fun(int x)
{
    if(x==1) return 1;
    else return x * fun(x-1);
}

int main()
{
    printf("%d\n",fun(5));
    return 0;
}
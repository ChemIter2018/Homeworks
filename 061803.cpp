#include<iostream>
using namespace std;

int f(int m, int n)
{
    if(m==0 || n==1)
        return 1;
    if(n>m)
        return f(m,m);
    else
        return f(m,n-1)+f(m-n,n);
}

int main()
{
    int t,m[20],n[20];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> m[i] >> n[i];
    }
    for (int i = 0; i < t; i++)
    {
        cout << f(m[i],n[i]) << " ";
    }
    return 0;
}
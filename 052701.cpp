#include<iostream>
using namespace std;

int fun(int n)
{
    int a = 1;
    for(int i=1;i<=n;i++)
    {
        a = a * i;
    }
    return a;
}

int main()
{
    int n, a = 0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        a+=fun(i);
    }
    cout << a;
}
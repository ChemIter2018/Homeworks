#include<iostream>
using namespace std;
int a[10000];
int sumCount;

void f(int t, int n, int m)
{
    if(t == m + 1)
    {
        int sum = 0;
        for (int i = 1; i < m; i++)
        {
            if(a[i] < a[i + 1]) sum++;
        }
        if(sum == m - 1) sumCount++;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        a[t] = i;
        f(t+1,n,m);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    f(1,n,m);
    cout << sumCount;
    return 0;
}
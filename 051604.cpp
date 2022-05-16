#include<iostream>
using namespace std;
int a[10000];
int sumCount = 0;

void f(int t, int n, int m, int tempSum)
{
    if(t == m + 1)
    {
        int sum = 0;
        //cout << a[1] << " " << a[2] << " " << a[3] << endl;
        for(int i = 1; i < m + 1; i++)
        {
            sum += a[i];
        }
        //cout << sum << endl;
        if(sum == tempSum) sumCount++;
        //cout << sumCount << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        a[t] = i;
        f(t+1,n,m,tempSum);
    }
}

int main()
{
    int n, m, sum;
    cin >> n >> m >> sum;
    f(1,n,m,sum);
    cout << sumCount;
    return 0;
}
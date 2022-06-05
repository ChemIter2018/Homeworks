#include<iostream>
#include<algorithm>
using namespace std;

struct Farmer
{
    int pi;
    int ai;
    int v;
};

bool cmp(Farmer a, Farmer b)
{
    return a.pi < b.pi;
}

int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    Farmer a[m];
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i].pi >> a[i].ai;
        a[i].v = a[i].pi * a[i].ai;
    }
    sort(a + 1, a + m + 1, cmp);
    for (int i = 1; i <= m; i++)
    {
        if(n >= a[i].ai)
        {
            sum += a[i].v;
            n -= a[i].ai;
        }
        else
        {
            sum += n*a[i].pi;
            n = 0;
        }

        if(n < 0) break;
    }

    cout << sum;
    return 0;
}

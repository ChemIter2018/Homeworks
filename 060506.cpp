#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[100], b[100] = {0}, n, r, sum = 0;
    cin >> n >> r;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        sort(b, b + r);
        sum += b[0] + a[i];
        b[0] += a[i];
    }

    cout << sum;
    return 0;
}
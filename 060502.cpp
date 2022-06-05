//接水时间短的人先接
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int s[100];
    s[0] = a[0];
    int sum = s[0];
    for (int i = 1; i < n; i++)
    {
        s[i] = s[i-1] + a[i];
        sum += s[i];
    }
    cout << sum;
    return 0;
}
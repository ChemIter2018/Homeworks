#include<iostream>
using namespace std;
int main()
{
    int a[100], n;
    cin >> n;
    a[0] = 1;
    a[1] = 3;
    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] * 2 + a[i - 2];
    }
    cout << a[n];
    return 0;
}
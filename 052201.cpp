#include<iostream>
using namespace std;
int main()
{
    int a[100], n;
    cin >> n;
    a[1] = 1;
    a[2] = 2;
    for (int i = 3; i < 100; i++)
    {
        a[i] = 2 * a[i -1] + a[i - 2];
    }
    cout << a[n] % 32767;
    return 0;
}
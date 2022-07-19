#include<iostream>
using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max = a[0];
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            number = i + 1;
        }
    }
    cout << number;
    return 0;
}
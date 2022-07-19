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

    int max = 0;
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            number++;
        }
        else
        {
            if (number > max) max = number;
            number = 0;
        }
    }
    if (number > max) max = number;
    cout << max;
    return 0;
}
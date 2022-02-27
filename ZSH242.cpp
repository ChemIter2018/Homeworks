#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n-1];
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(int k = j + 1; k < n; k++)
                {
                    a[k-1] = a[k];
                }
                n--;
                j--;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }

    return 0;
}
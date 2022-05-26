#include<iostream>
using namespace std;
int main()
{
    int a[5][5], n, b[100][2], sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            sum += a[b[i][1]][j];
        }
        for(int k = 1; k <= 5 ; k++)
        {
            sum += a[k][b[i][2]];
        }
        sum -= a[b[i][1]][b[i][2]];
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
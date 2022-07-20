#include<iostream>
using namespace std;

int main()
{
    int n, a[100][100], b[100][100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int A1, A2, A3, A4, A5, A6, A7, A8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - 1 >= 0 && j - 1 >= 0) A1 = a[i - 1][j - 1]; else A1 = 0;
            if (i - 1 >= 0) A2 = a[i - 1][j]; else A2 = 0;
            if (i - 1 >= 0 && j + 1 <= 3) A3 = a[i - 1][j + 1]; else A3 = 0;
            if (j - 1 >= 0) A4 = a[i][j - 1]; else A4 = 0;
            if (j + 1 <= 3) A5 = a[i][j +1]; else A5 = 0;
            if (i + 1 <= 3 && j - 1 >= 0) A6 = a[i + 1][j - 1]; else A6 = 0;
            if (i + 1 <= 3) A7 = a[i + 1][j]; else A7 = 0;
            if (i + 1 <= 3 && j + 1 <= 3) A8 = a[i + 1][j + 1]; else A8 = 0;
            b[i][j] = A1 + A2 + A3 + A4 + A5 + A6 + A7 + A8;
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
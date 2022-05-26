#include<iostream>
using namespace std;
int main()
{
    int a[5][5], max[5], min[5], flag = 0;
    memset(max, 0, sizeof(max));
    memset(min, 100, sizeof(min));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(a[i][j] > max[i]) max[i] = a[i][j];
            if(a[i][j] < min[j]) min[j] = a[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(a[i][j] == max[i] && a[i][j] == min[j])
            {
                cout << a[i][j] << endl;
                flag++;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << max[i] << " " << min[i] << endl;
    }

    if(flag == 0) cout << "Not found" << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int k, n = 0, m = 0, num[100], temp[100];
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < k - 1; i++)
    {
       for (int j = i + 1; j < k; j++)
       {
          temp[n] = num[i] + num[j];
          n++;
       }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(num[i] == temp[j])
            {
                m++;
                break;
            }
        }
    }
    cout << m;
    return 0;
}
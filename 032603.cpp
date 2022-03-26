#include <iostream>
#include "sort.h"
using namespace std;
int main()
{
    int num[100];
    int temp[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    SelectSort(num, n);

    for(int i = 0; i < n - 1; i++)
    {
        temp[i] = num[i + 1] - num[i];
    }

    for(int i = 1; i < n - 1; i++)
    {
        if(temp[i] != temp[0])
        {
            cout << "Not" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
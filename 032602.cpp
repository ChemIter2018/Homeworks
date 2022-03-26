#include <iostream>
#include <cmath>
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

    for(int i = 0; i < n - 1; i++)
    {
        temp[i] = abs(num[i + 1] - num[i]);
    }

    SelectSort(temp, n - 1);

    for(int i = 0; i < n - 1; i++)
    {
        if(temp[i] != i + 1)
        {
            cout << "Not jolly" << endl;
            return 0;
        }
    }

    cout << "Jolly" << endl;
    return 0;
}
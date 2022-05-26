#include<iostream>
using namespace std;

void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 1; j < n - i; j++)
            if (a[j - 1] < a[j])
                std::swap(a[j - 1], a[j]);
}

int main()
{
    int i = 0, a[100];
    while(true)
    {
        cin >> a[i];
        if(a[i] == 0) break;
        i++;
    }
    //BubbleSort(a, i+1);
    for (int j = i - 1; j>=0 ; j--)
    {
        cout << a[j] << " ";
    }
    return 0;
}
#include <iostream>
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
    int num[10001];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    BubbleSort(num, n);

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}
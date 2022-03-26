#include <iostream>

void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 1; j < n - i; j++)
            if (a[j - 1] > a[j])
                std::swap(a[j - 1], a[j]);
}

void SelectSort(int a[], int n)
{
    int j,minIndex;
    for(int i=0;i<n;++i)
    {
        minIndex=i;
        for(j=i+1;j<n;++j)
            if(a[j]<a[minIndex])
                minIndex=j;
        std::swap(a[i],a[minIndex]);
    }
}

void InsertSort(int a[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
        if (a[i] < a[i - 1])
        {
            int temp = a[i];
            for (j = i - 1; j >= 0 && a[j] > temp; j--)
                a[j + 1] = a[j];
            a[j + 1] = temp;
        }
}

void ReInsertSort(int a[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
        if (a[i] > a[i - 1])
        {
            int temp = a[i];
            for (j = i - 1; j >= 0 && a[j] < temp; j--)
                a[j + 1] = a[j];
            a[j + 1] = temp;
        }
}

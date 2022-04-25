#include <iostream>
#include <algorithm>
#include "sort.h"
using namespace std;

struct line
{
    int x;
    int y;
};

int main()
{
    int n, m = 0, e;
    double a, b;
    int c[1000];
    line l[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i].x >> l[i].y;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            a = (l[j].y - l[i].y)/(l[j].x - l[i].x);
            b = l[j].y - a * l[j].x;
            for (int k = 0; k < n; k++)
            {
                if(l[k].y == l[k].x * a + b)
                {
                    e++;
                }
            }
            c[m] = e;
            m++;
            e = 0;
        }
    }
    BubbleSort(c, m);
    cout << c[0];
    return 0;
}
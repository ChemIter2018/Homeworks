#include <iostream>
#include <algorithm>
using namespace std;

struct number
{
    int a;
    int b;
    int c;
};

bool cmp(number num1, number num2)
{
    if(num1.c != num2.c) return num1.c < num2.c;
    else return num1.b < num2.b;
}

int main()
{
    number num[100];
    int m = 0;
    int n;
    cin >> n;
    for (int i = 0; i <= n ; i++)
    {
        for(int j = 0; j <= n/2; j++)
        {
            for (int k = 0; k <= n/5; k++)
            {
                if(i + 2*j + 5*k == n)
                {
                    num[m].a = i;
                    num[m].b = j;
                    num[m].c = k;
                    m++;
                }
            }
        }
    }
    sort(num, num + m, cmp);
    for (int i = 0; i < m; i++)
    {
        cout << i + 1 << ": " << num[i].a << " " << num[i].b << " " << num[i].c << endl;
    }

    return 0;
}
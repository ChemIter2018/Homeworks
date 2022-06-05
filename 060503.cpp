//贪心算法，拿宝物
#include<iostream>
#include<algorithm>
using namespace std;
struct Treasure
{
    double weight;//重量
    double value; //价值
    double v;     //单位重量价值
};

bool cmp(Treasure a, Treasure b)
{
    return a.v > b.v;
}

int main()
{
    Treasure a[5];
    for (int i = 1; i <= 4; i++)
    {
        cin >> a[i].weight >> a[i].value;
        a[i].v = a[i].value / a[i].weight;
    }
    sort(a+1, a+5, cmp);
    double n = 300, sum = 0;
    for (int i = 1; i <= 4; i++)
    {
        if(n >= a[i].weight)
        {
            sum += a[i].value;
            n -= a[i].weight;
        }
        else
        {
            sum += n*a[i].v;
            n = 0;
        }
        if(n < 0) break;
    }

    cout << sum;
    return 0;
}
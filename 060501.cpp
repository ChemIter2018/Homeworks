//贪心算法：连续k个水桶的水量加起来最高
#include<iostream>
using namespace std;

int main()
{
    int a[100], s[100] = {0};
    int n,k;
    cin >> n;
    cin >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    //s[1]=a[1]
    //s[2]=a[1] + a[2]
    //s[3]=a[1] + a[2] + a[3]
    int max;
    for (int i = k + 1; i <= n; i++)
    {
        int res = s[i] - s[i-k];
        if(res>max) max = res;
    }
    cout << max;
    return 0;
}
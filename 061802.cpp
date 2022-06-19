#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, M, a[3], sum = 0, num = 0;
    cin >> n;
    cin >> M;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        //cout << a[i];
        sum += a[i];
        num++;
        if(sum >= M) break;
    }
    cout << num;
    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N, B, Hi[100], s[100], sum = 0, num = 0;
    cin >> N >> B;
    for (int i = 0; i < N; i++)
    {
        cin >> Hi[i];
    }
    sort(Hi, Hi + N);
    s[0] = Hi[0];
    for (int i = 1; i < N; i++)
    {
        s[i] = s[i - 1] + Hi[i];
        sum += s[i];
        num++;
        if(sum > B) break;
    }
    cout << num + 1;
    return 0;
}
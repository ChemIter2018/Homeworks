#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int gold = 1, day = 0, sum = 0;
    while(true)
    {
        for(int i = 1; i <= gold; i++)
        {
            day++;
            sum += gold;
            if(day == k) goto here;
        }
        gold++;
    }
    here:
    cout << sum;
    return 0;
}

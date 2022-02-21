#include<iostream>
#include<cmath>
using namespace std;
bool check(int m){
    int a = m%10, b = m/10%10, c = m/100%10, d = m/1000;
    if(pow(a,4) + pow(b,4) + pow(c,4) + pow(d,4) == m) return true;
    return false;
}
int main()
{
    for (int i = 1630; i <= 1640; i++)
    {
        if(check(i) == true) cout << i << " ";
    }

    return 0;
}
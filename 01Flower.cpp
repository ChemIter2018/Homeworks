#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int i,a,b,c,d;
    int sum;
    for(i = 1000; i <= 9999; i++)
    {   a = i%10;
        b = i/10%10;
        c = i/100%10;
        d = i/1000;
        sum = pow(a,4) + pow(b,4) + pow(c,4) + pow(d,4);
        if(i == sum)
        {
            cout << i << endl;
        }
    }
}
#include<iostream>
using namespace std;

bool check(int n)
{
    bool isPrime = true;
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{
    bool isPrime = true;
    int n;
    for (int i = 10; i < 1000; i++)
    {
        isPrime = check(i);
        if(isPrime)
        {
            if(i < 100)
            {
                n = i%10*10 + i/10;
            }
            else
            {
                n = i%10*100 + i/10%10*10 + i/100;
            }
            isPrime = check(n);
            if(isPrime) cout << i << endl;
        }
    }
}
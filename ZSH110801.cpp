#include<iostream>
using namespace std;
int main()
{
    for(int i = 7; i >= 1; i--)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        cout << i;
        if(i == 1)
        {
            continue;
        }
        cout << ',';
    }
    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

bool check(int c){
    for (int i = 2; i <= sqrt(c); i++)
    {
        if(c%i == 0) return false;
    }
    return true;
}

int main()
{
    int temp;
    for(int i = 10; i <= 1000; i++)
    {
        if(i < 99)  temp = i%10 * 10 + i/10%10;
        else temp = i%10 * 100 + i/10%10 * 10 + i/100%10;
        if(check(i) == true && check(temp) == true) cout << i << endl;
    }
    return 0;
}
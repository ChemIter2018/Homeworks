#include <iostream>
#include <math.h>
using namespace std;

int sum(int c){
    int sum = 0;
    for (int i = 1; i <= c/2; i++)
    {
        if(c%i == 0) sum += i;
    }
    return sum;
}

int main()
{
    for(int a = 2; ; a++)
    {
        int b = sum(a);
        if(a == sum(b) && a != b)
        {
            cout << a << " " << b << endl;
            break;
        }
    }
    return 0;
}
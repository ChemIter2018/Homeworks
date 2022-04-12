#include <iostream>
using namespace std;
int main()
{
    int i = 21;
    while(true)
    {
        if((i - 1)%5 == 0 && (i - 4)%7 == 0 && (i - 10)%11 == 0) break;
        i++;
    }
    cout << i;
    return 0;
}
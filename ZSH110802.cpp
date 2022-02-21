#include<iostream>
using namespace std;
int main()
{
    int p = 1, ans = 0;
    for(int i = 1; i <= 400; i+=3)
    {
        p*=i;
        ans+=p;
        if(ans >= 25)
        {
            break;
        }
        cout << "ans = " << ans << endl;
    }
    return 0;
}
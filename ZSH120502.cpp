#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    cin >> a;
    double left, right, mid;
    left = 0;
    right = a;
    mid = (left + right) / 2;
    while(right - left > 0.0001)
    {
        double s;
        s = pow(mid, 4);
        if(s > a)
        {
            right  = mid;
            mid = (left + right) / 2;
        }
        else if(s < a)
        {
            left = mid;
            mid = (left + right) / 2;
        }
        //cout << s << " " << a << " " << left << " " << right << " " << mid << endl;
    }
    cout << mid << endl;
    return 0;
}
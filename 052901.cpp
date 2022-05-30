#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int a, b, h;
    float area;
    cin >> a >> b >> h;
    if(b < a)
    {
        swap(a, b);
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    area = (a+b)*h/2.0;
    cout << fixed << setprecision(1) <<area;
    return 0;
}
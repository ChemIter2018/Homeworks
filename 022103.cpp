#include<iostream>
#include<cmath>
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
    int a;
    cin >> a;
    int b[100];
    int j = 0;
    int max;

    for (int i = 2; i <= a / 2; i++)
    {
        if(check(i) == true && check(a - i) == true){
            b[j] = i * (a - i);
            j++;
        }
    }
    max = b[0];
    cout << b[0] << " ";
    for(int k = 1; k < j; k++)
    {
        cout << b[k] << " ";
        if(b[k] > max) max = b[k];
    }
    cout << endl;
    cout << max;
    return 0;
}
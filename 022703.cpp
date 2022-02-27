#include<iostream>
using namespace std;
int main()
{
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> a[i][j];
        }
    }

    int b, c[6], sum;
    cin >> b;
    cin >> c[0] >> c[3];
    cin >> c[1] >> c[4];
    cin >> c[2] >> c[5];

    for (int i = 0; i < b; i++)
    {
        sum = 0;

        for (int j = 0; j < 5; j++)
        {
            sum += a[c[i]-1][j] + a[j][c[i+3]-1];
        }

        sum -= a[c[i]-1][c[i+3]-1];

        cout << sum << endl;
    }

    return 0;
}

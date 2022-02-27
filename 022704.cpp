#include<iostream>
using namespace std;
int main()
{
    int max[5], min[5], count = 0;
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<5;i++){
        max[i] = a[i][0];
        for(int j=0;j<5;j++){
            if(a[i][j] > max[i]) max[i] = a[i][j];
        }
    }

    for(int j=0;j<5;j++){
        min[j] = a[0][j];
        for(int i=0;i<5;i++){
            if(a[i][j] < min[j]) min[j] = a[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j] == max[i] && a[i][j] == min[j])
            {
                cout << a[i][j];
                count++;
            }
        }
    }

    if(count == 0) cout << "Not found";

    return 0;
}
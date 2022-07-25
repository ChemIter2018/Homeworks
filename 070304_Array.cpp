#include<iostream>
#include<vector>
using namespace std;

vector< vector<int> > generateMatrix(int n)
{
    vector< vector<int> > res(n, vector<int>(n, 0));
    int startx = 0, starty = 0;
    int loop = n / 2;
    int mid = n / 2;
    int count = 1;
    int offset = 1;
    int i, j;
    while (loop--)
    {
        i = startx;
        j = starty;

        for ( j = starty; j < n - offset; j++)
        {
            res[startx][j] = count++;
            cout << startx << " " << j << endl;
        }
        cout << "------" << endl;
        for ( i = startx; i < n - offset; i++)
        {
            res[i][j] = count++;
            cout << i << " " << j << endl;
        }
        cout << "------" << endl;
        for ( ; j > starty; j--)
        {
            res[i][j] = count++;
            cout << i << " " << j << endl;
        }
        cout << "------" << endl;
        for ( ; i > startx; i--)
        {
            res[i][j] = count++;
            cout << i << " " << j << endl;
        }
        cout << "------" << endl;
        startx++;
        starty++;

        offset += 1;
    }

    if (n % 2)
    {
        res[mid][mid] = count;
    }
    return res;
}

int main()
{
    //int n = 5;
    int n;
    cin >> n;
    vector< vector<int> > result = generateMatrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
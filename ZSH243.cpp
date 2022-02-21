#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n >> i >> j;
    cout << "---------------------" << endl;

    const int size = n;
    int matrix[size][size];
    int row = 0;
    int col = 0;

    int start = 1;
    int temp = size;
    for (int count = 0; count < size / 2; count++)
    {
        for (; col < temp - 1; col++)
            matrix[row][col] = start++;
        for (; row < temp - 1; row++)
            matrix[row][col] = start++;
        for (col = temp - 1; col > count; col--)
            matrix[row][col] = start++;
        for (row = temp - 1; row > count; row--)
            matrix[row][col] = start++;

        temp--;
        row++;
        start -= 1;
    }

    for (int m = 0; m < size; m++)
    {
        for (int n = 0; n < size; n++)
        {
            cout << setw(5) << matrix[m][n];
        }
        cout << endl;
    }

    cout << "---------------------" << endl;
    cout << matrix[i-1][j-1] << endl;

    return 0;
}
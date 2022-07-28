#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct student
{
    char name[100];
    int score;
};


int main()
{
    struct student st[100], temp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].name >> st[i].score;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (st[i].score < st[j+1].score)
            {
                temp = st[j];
                st[j] = st[j+1];
                st[j+1] = temp;
            }
            if (st[i].score == st[j+1].score && st[j].name > st[j+1].name)
            {
                temp = st[j];
                st[j] = st[j+1];
                st[j+1] = temp;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << st[i].name << " " << st[i].score << endl;
    }
    return 0;
}
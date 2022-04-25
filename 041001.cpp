#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct rectangle
{
    int id;
    int length;
    int width;
};

bool cmp1(rectangle a, rectangle b)
{
    if(a.id != b.id) return a.id < b.id;
    else if(a.length != b.length) return a.length < b.length;
    else return a.width < b.width;
}

bool cmp2(const rectangle& a, const rectangle& b)
{
  return (a.id==b.id && a.length == b.length && a.width == b.width);
}

int main()
{
    rectangle rec[100];
    vector<rectangle> Rec;
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> rec[i].id >> x >> y;
        if(x > y)
        {
            rec[i].length = x;
            rec[i].width = y;
        }
        else
        {
            rec[i].length = y;
            rec[i].width = x;
        }
    }
    sort(rec, rec + n, cmp1);
    for (int i = 0; i < n; i++)
    {
        Rec.push_back(rec[i]);
    }
    Rec.erase(unique(Rec.begin(), Rec.end(), cmp2), Rec.end());
    cout << endl;
    for(vector<rectangle>::iterator it = Rec.begin(); it != Rec.end(); it++)
    {
        cout << (*it).id << " " << (*it).length << " " << (*it).width << endl;
    }

    return 0;
}
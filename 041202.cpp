#include <iostream>
#include <algorithm>
using namespace std;

struct human
{
    int id;
    int age;
};

bool cmp1(human hum1, human hum2)
{
    if(hum1.age != hum2.age) return hum1.age > hum2.age;
    else return hum1.id < hum2.id;
}

bool cmp2(human hum1, human hum2)
{
    return hum1.id < hum2.id;
}

int main()
{
    human hum1[100];
    human hum2[100];
    int n, tempID, tempAge, a = 0, b = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tempID >> tempAge;
        if(tempAge >= 60)
        {
            hum1[a].id = tempID;
            hum1[a].age = tempAge;
            a++;
        }
        else
        {
            hum2[b].id = tempID;
            hum2[b].age = tempAge;
            b++;
        }
    }
    sort(hum1, hum1 + a, cmp1);
    sort(hum2, hum2 + b, cmp2);
    cout << endl;
    for(int i = 0; i < a; i++) cout << hum1[i].id << " " << hum1[i].age << endl;
    for(int i = 0; i < b; i++) cout << hum2[i].id << " " << hum2[i].age << endl;
    return 0;
}
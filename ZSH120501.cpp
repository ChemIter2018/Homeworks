#include <iostream>
using namespace std;
int main()
{
    cout << "请猜出1-100间的某一个数字：" << endl;
    int ans = 60;
    int count = 0;
    while (true)
    {
        int tmp;
        cin >> tmp;
        ++count;
        if(tmp < ans) cout << "你猜小了" << endl;
        else if(tmp > ans) cout << "你猜大了" << endl;
        else
        {
            cout << "你猜对了" << endl;
            break;
        }
    }
    cout << "游戏结束，猜的次数为：" << count << endl;
    return 0;
}
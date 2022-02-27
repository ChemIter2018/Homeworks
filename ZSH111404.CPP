#include<iostream>
using namespace std;
int main()
{
    char phone;
    for(phone = 'A'; phone <= 'D'; phone++)
    {
        if((phone != 'A') + (phone == 'C') + (phone == 'D') + (phone != 'D') == 3)
        {
            cout << "手机是" << phone << "的" << endl;
        }
        else
        {
            cout << "如果手机是" << phone << "的，逻辑存在错误" << endl;
        }
    }
    return 0;
}
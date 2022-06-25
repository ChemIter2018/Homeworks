#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

double round(double number, unsigned int bits) {
    stringstream ss;
    ss << fixed << setprecision(bits) << number;
    ss >> number;
    return number;
}

int main() {
    double number = 3.1415926535897932;
    //cout << fixed << showpoint << setprecision(10);
    cout << "一开始number = " << number << endl;

    for (int i = 0; i < 15; ++i) {
        cout << "number保留" << i << "位小数后为: "
            << round(number, i) << endl;
    }

    double a = round(3.1415926, 3);
    cout << a;

    return 0;
}
#include <iostream>
using namespace std;

const int offset = 105; // 为桶的边界
const int maxSize = 100; // 数组的最大存储范围

// 桶排序
template <typename T>
void BucketSort(T arr[], int n);
// 输出数组
template <typename T>
void Print(T arr[], int n);

int main(int argc, const char * argv[]) {
    int n, i, arr[maxSize];
    cout << "请输入要排序的数的个数：";
    cin >> n;
    srand((int)time(NULL)); // 设置时间为随机点
    for(i = 0; i < n; i++) // 产生n个随机数
        arr[i] = rand() % 100;
    cout << "排序前：";
    Print(arr, n);
    BucketSort(arr, n); // 调用桶排序
    std::cout << "排序后：";
    Print(arr, n);
    return 0;
}

template <typename T>
void BucketSort(T arr[], int n) {
    int i, j;
    T buckets[offset];

    for(i = 0; i < offset; i++) // 清零
        buckets[i] = 0;
    // 1.计数,将数组arr中的元素放到桶中
    for(i = 0; i < n; i++)
        buckets[arr[i]]++; // 将arr[i]的值对应buckets数组的下标，每有一个就加1
    // 2.排序
    for(i = 0, j = 0; i < offset; i++) {
        while(buckets[i] > 0) { // 说明存有元素,相同的整数，要重复输出
            arr[j] = i;
            buckets[i]--;
            j++;
        }
    }
}

// 输出数组
template <typename T>
void Print(T arr[], int n) {
    int i;

    for(i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

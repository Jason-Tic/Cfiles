//编写一个程序，用整型数组初始化一个vector对象
//编写一个程序 ，用vector初始化一个整型数组
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    const int sz = 10;
    int a[sz];
    srand((unsigned)time(NULL));
    cout << "数组的内容是：" << endl;
    for (auto &val : a)
    {
        val = rand() % 100;
        cout << val << " ";
    }
    cout << endl;
    vector<int> vInt(begin(a), end(a));
    for (auto val : vInt)
    {
        cout << val << " ";
    }
    return 0;
}
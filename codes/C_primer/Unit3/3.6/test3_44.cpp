#include <iostream>
using namespace std;
using int_array = int[4];
int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    cout << "使用范围for语句输出多维数组的内容:" << endl;
    for (int_array &row : ia)
    {
        for (int &col : row)
            cout << col << "  ";
        cout << endl;
    }
    //
    cout << "使用普通for语句和下标运算符输出多维数组的内容:" << endl;
    for (int i = 0; i != 3; ++i)
    {
        for (int j = 0; j != 4; ++j)
            cout << ia[i][j] << "  ";
        cout << endl;
    }
    cout << "使用普通for语句和指针输出多维数组的内容:" << endl;
    for (int_array *p = begin(ia); p != end(ia); ++p)
    {
        for (int *q = begin(*p); q != end(*p); ++q)
            cout << *q << "  ";
        cout << endl;
    }

    return 0;
}
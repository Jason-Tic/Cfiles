#include <iostream>
#include <vector>

using namespace std;

bool Search(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    for (; beg != end; beg++)
        if (*beg == val)
            return true;
    return false;
}

vector<int>::iterator Search_vec(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    for (; beg != end; beg++)
        if (*beg == val)
            return beg;
    return end;
}

int main()
{
    vector<int> ilist = {1, 2, 3, 4, 5, 6, 7, 8};

    cout << Search_vec(ilist.begin(), ilist.end(), 9) - ilist.begin() << endl;
    cout << Search_vec(ilist.begin(), ilist.end(), 3) - ilist.begin() << endl;

    return 0;
}
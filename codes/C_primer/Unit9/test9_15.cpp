#include <iostream>
#include <vector>
#include <list>
using namespace std;
bool EqualVec(vector<int> &vec1, vector<int> &vec2)
{
    if (vec1 == vec2)
        return true;
    return false;
}

bool EqualVec(list<int> &ilist, vector<int> &ivec)
{
    if (ilist.size() != ivec.size())
        return false;
    auto lb = ilist.begin();
    auto le = ilist.end();
    auto ve = ivec.begin();
    for (; lb != le; ve++, lb++)
        if (*lb != *ve)
            return false;
    return true;
}

int main()
{
    list<int> list1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {1, 2, 3, 4};
    cout << EqualVec(list1, vec2) << endl;
    return 0;
}
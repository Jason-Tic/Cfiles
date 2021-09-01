#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>

using namespace std;

int main()
{
    vector<double> vec = {1.2, 1.3, 1, 2, 3};

    cout << accumulate(vec.cbegin(), vec.cend(), 0.0) << endl;

    // list<string> strnums = {"hello", "hello", "world"};
    // cout << count(strnums.cbegin(), strnums.cend(), "hello") << endl;

    return 0;
}
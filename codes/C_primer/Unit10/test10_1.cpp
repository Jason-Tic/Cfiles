#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    vector<int> vec = {1, 1, 1, 2, 3};

    cout << count(vec.cbegin(), vec.cend(), 1) << endl;
    list<string> strnums = {"hello", "hello", "world"};
    cout << count(strnums.cbegin(), strnums.cend(), "hello") << endl;
    // vector<int> vec2 ;
    // cout<<vec2.size()<<endl;
    // cout<<vec2.at(0)<<" "<<vec2[0];
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>

using namespace std;
void printS(const vector<int> &ique)
{
    if (!ique.empty())
        for (auto is = ique.cbegin(); is != ique.cend(); is++)
            cout << *is << "  ";
    return;
}
int main()
{
    vector<int> vec = {1, 1, 1, 2, 3};
    fill_n(vec.begin(), vec.size(), 0);
    printS(vec);

    return 0;
}
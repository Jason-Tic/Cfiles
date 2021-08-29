#include <iostream>
#include <vector>
#include <list>
using namespace std;

void printS(const vector<int> &ique)
{
    if (!ique.empty())
        for (auto is = ique.cbegin(); is != ique.cend(); is++)
            cout << *is << "  ";
    return;
}
void printS(const list<int> &ique)
{
    if (!ique.empty())
        for (auto is = ique.cbegin(); is != ique.cend(); is++)
            cout << *is << "  ";
    return;
}
int main()
{
    int a[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    vector<int> iv;
    list<int> il;
    iv.assign(a, a + 11);
    il.assign(a, a + 11);
    auto iiv = iv.begin();
    while (iiv != iv.end())
    {
        if (!(*iiv & 1))
            iiv = iv.erase(iiv);
        else
            iiv++;
    }
    auto iil = il.begin();
    while (iil != il.end())
    {
        if (*iil & 1)
            iil = il.erase(iil);
        else
            iil++;
    }
    printS(iv);
    printS(il);

    return 0;
}
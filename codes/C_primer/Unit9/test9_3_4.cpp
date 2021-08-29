#include <iostream>
#include <vector>
#include <forward_list>
using namespace std;

void printS(const forward_list<int> &ique)
{
    if (!ique.empty())
        for (auto is = ique.cbegin(); is != ique.cend(); is++)
            cout << *is << "  ";
    return;
}
void printS(const forward_list<string> &ique)
{
    if (!ique.empty())
        for (auto is = ique.cbegin(); is != ique.cend(); is++)
            cout << *is << "  ";
    return;
}

// void search_Insert(forward_list<string> fls, string str1, string str2)
// {
//     // if (fls.empty())
//     //     fls.insert_after(fls.before_begin(), str2);
//     // else
//     // {
//     auto prev = fls.before_begin();
//     auto curr = fls.begin();
//     // while (curr != fls.end())
//     // {
//     //     cout << *curr << endl;
//     //     if ((*curr) != str1)
//     //     {
//     //         cout << "no"<< " ";
//     //         prev = curr;
//     //         curr++;
//     //     }
//     //     else
//     //     {
//     //         fls.insert_after(curr, str2);
//     //         cout << "yes"<< " ";
//     //         break;
//     //     }
//     // }
//     fls.insert_after(prev, "second2");
//     fls.insert_after();
//     return ;
// }
int main()
{
    // forward_list<int> fl = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // auto prev = fl.before_begin();
    // auto curr = fl.begin();
    // while (curr != fl.end())
    // {
    //     if (*curr & 1)
    //         curr = fl.erase_after(prev);
    //     else
    //     {
    //         prev = curr;
    //         curr++;
    //     }
    // }
    // printS(fl);
    // cout << endl;
    forward_list<string> fls2;//= {};//= {"hello", "world", "first"};
    fls2.insert_after(fls2.before_begin(), "second2");
    fls2.insert_after(fls2.begin(),"first");
    // search_Insert(fls2, "world", "second");
    printS(fls2);
    return 0;
}
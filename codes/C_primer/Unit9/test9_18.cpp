#include <iostream>
#include <deque>
#include <list>

using namespace std;

int main()
{
    deque<string> deq;
    list<string> sl;
    string str;
    while (cin >> str)
    {
        deq.push_back(str);
        sl.push_back(str);
    }
    for (auto si = deq.begin(); si != deq.end(); si++)
        cout << *si << endl;
    for (auto si = sl.begin(); si != sl.end(); si++)
        cout << *si << endl;
    return 0;
}
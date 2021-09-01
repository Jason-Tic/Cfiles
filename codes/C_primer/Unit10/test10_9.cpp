#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>

using namespace std;
void printS(const vector<string> &ique)
{
    if (!ique.empty())
        for (auto is = ique.cbegin(); is != ique.cend(); is++)
            cout << *is << "  ";
    return;
}

void elimDups(vector<string> &words)
{
    printS(words);
    cout << endl;
    sort(words.begin(), words.end());
    printS(words);
    cout << endl;
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique,words.end());
    printS(words);
}
int main()
{
    vector<string> words;
    string str;
    while (cin >> str)
        words.push_back(str);
    elimDups(words);
    return 0;
}
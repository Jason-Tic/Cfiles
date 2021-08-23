#include <iostream>
#include <deque>
#include <list>
#include<vector>

using namespace std;

void Copy(const list<int> &il, deque<int> &ideq1, deque<int> &ideq2)
{
    if (!il.empty())
        for(auto is = il.cbegin();is!=il.cend();is++)
            ((*is) & 1) == 1 ? ideq1.push_back(*is) : ideq2.push_back(*is);
    return;
}

void printS(const deque<int> &ique)
{
    if (!ique.empty())
        for (auto is = ique.cbegin(); is != ique.cend(); is++)
            cout << *is << "  ";
    return ;
}

void printS(const vector<string> &ique)
{
    if (!ique.empty())
        for (auto is = ique.cbegin(); is != ique.cend(); is++)
            cout << *is << "  ";
    return ;
}

void insertS(vector<string> &vl)
{
    auto iter = vl.begin();
    string word;
    while(cin>>word)    
        iter = vl.insert(iter,word);
}

int main()
{
    // deque<int> deq1,deq2;
    // list<int> il = {1,2,3,4,5,6};
    // Copy(il,deq1,deq2);
    // printS(deq1);
    // printS(deq2);
    vector<string> vs;
    insertS(vs);
    printS(vs);

    return 0;
}
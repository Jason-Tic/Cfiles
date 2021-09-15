#include <iostream>
#include <fstream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{

    cout<<argv[1];
    ifstream in(argv[1]);
    if (!in)
    {
        cout << "打开输入文件失败！" << endl;
        exit(1);
    }

    map<string, size_t> word_count;   //size_t -->long unsigened int
    string s;
    while (in >> s)
        ++word_count[s];
    for (const auto &d : word_count)
        cout << d.first << "出现了" << d.second << "次" << endl;
    return 0;
}
#include <iostream>
#include <fstream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string &trans(string &s)
{
    for (int p = 0; p < s.size(); p++)  
    {
        cout<<s[p];
        if (s[p] >= 'A' && s[p] <= 'Z')
        {
            s[p] -= ('A' - 'a');
        }
        else if (s[p] == ',' || s[p] == '.')
        {
            s.erase(p, 1);      //此处erase函数返回删除后的string，所有size减少1，是的for循环不能使用p!=s.seiz()
        }
    }
    cout << " " << s << endl;
    return s;
}
int main(int argc, char *argv[])
{

    ifstream in(".\\word_count");
    if (!in)
    {
        cout << "打开输入文件失败！" << endl;
        exit(1);
    }

    map<string, size_t> word_count; //size_t -->long unsigened int
    string s;
    while (in >> s)
        ++word_count[trans(s)];
    for (const auto &d : word_count)
        cout << d.first << "出现了" << d.second << "次" << endl;
    return 0;
}
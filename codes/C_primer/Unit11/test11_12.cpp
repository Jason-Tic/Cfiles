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
    
    // cout<<argv[1]<<endl;
    ifstream in(".\\pair.txt");
    if (!in)
    {
        cout << "打开输入文件失败！" << endl;
        exit(1);
    }
    else
        cout<<"成功"<<endl;

    vector<pair<string, int>> data;
    string s;
    int v;
    while (in >> s && in >> v)
        data.push_back(pair<string, int>(s, v));
    for (const auto &d : data)
        cout << d.first << " " << d.second << endl;
    return 0;
}
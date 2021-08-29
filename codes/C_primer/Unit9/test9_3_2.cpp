#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};
    cout << vec.at(0) << " " << vec[0] << " " << vec.front() << " " << vec.back()<<endl;
    vector<int> vec2 ;
    cout<<vec2.size()<<endl;
    cout<<vec2.at(0)<<" "<<vec2[0];
    return 0;
}
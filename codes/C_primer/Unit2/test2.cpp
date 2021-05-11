#include <iostream>
//练习2.10 变量的初始值
std::string global_str;
int global_int;
void test2_10()
{
  int local_int;
  std::string local_str;
  std::cout<<"global_str:"<<global_str<<";  global_int:"<<global_int
            <<";  local_int:"<<local_int<<";  local_str:"<<local_str<<std::endl;
}
int main(){
  // unsigned u = 10, u2 = 42;
  // std::cout<<u-u2<<std::endl;
  // std::cout<<u2-u<<std::endl;
  // int i = 10;
  // std::cout<<u - i<<std::endl;
  test2_10();
  return 0;
  
}

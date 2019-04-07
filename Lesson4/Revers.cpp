#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  std::string User_str;
  cout<<"Enter your string:  ";
  cin>>User_str;
  cout<<endl;
  std::string Reverse_str = User_str;
  int len = User_str.length();
  for(int i = (len-1); i >= 0; --i)
    {
      User_str[(len-1)-i] = Reverse_str[i];
    }
  cout<<User_str;

    return 0;
}

#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char *argv[])
{
  std::string str;
  cout<<"Enter your string:  ";
  cin>>str;
  cout<<endl;
  for(int i = (str.length()-1); i >= 0; i--)
    {
      cout<<str[i];
    }

    return 0;
}

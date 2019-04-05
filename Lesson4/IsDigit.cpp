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
  cout<<"Is digit: ";
  for(int i=0; i<str.length(); i++)
    {

      if( ((int) str[i] >= 48) && ( (int) str[i] <= 57) )
        {
          cout<<str[i]<<" ";
        }

    }

    return 0;
}

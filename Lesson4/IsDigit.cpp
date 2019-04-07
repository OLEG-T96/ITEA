#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  std::string str;
  cout<<"Enter your string:  ";
  std::getline(std::cin, str);
  cout<<endl;
  if(str.empty())
    {
      cout<<"Your string is empty";
      return 0;
    }
  cout<<"Is digit: ";
  unsigned counter = 0;
  const int ASCII_0{48}, ASCII_9{57};
  for(unsigned int i=0; i<str.length(); ++i)
    {
      if( ( str[i] >= ASCII_0) && (  str[i] <= ASCII_9) )
        {
          cout<<str[i]<<" ";
          counter++;
        }
    }
  if(counter == 0)
    {
      cout<<"No digits";
    }

  return 0;
}

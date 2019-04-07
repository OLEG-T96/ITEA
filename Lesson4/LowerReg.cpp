#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout<<"Enter your string:  ";
    std::string str;
    cin>>str;
    cout<<endl;
    const int Shift{32}, ASCII_A{65}, ASCII_Z{90};
    for(unsigned int i=0; i<str.length(); ++i)
      {
        if( (str[i] >= ASCII_A) && (str[i] <= ASCII_Z) )
          {
            str[i] += Shift;
          }
      }
    cout<<str;

    return 0;
}

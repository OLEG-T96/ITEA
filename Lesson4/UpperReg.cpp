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
    const int Shift{32}, ASCII_a{97}, ASCII_z{122};
    for(unsigned int i=0; i<str.length(); ++i)
      {
        if( (str[i] >= ASCII_a) && (str[i] <= ASCII_z) )
          {
            str[i] -= Shift;
          }
      }
    cout<<str;

    return 0;
}

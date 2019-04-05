#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

char LowerReg(char symb)
{
    return symb += 32;
}

int main(int argc, char *argv[])
{
    std::string str;
    cout<<"Enter your string:  ";
    cin>>str;
    cout<<endl;
    for(int i=0; i<str.length(); i++)
      {

        if( ((int) str[i] >= 65) && ( (int) str[i] <= 90) )
          {
            //str[i] = UpperReg();
            cout<<LowerReg(str[i]);
          }
        else
          {
            cout<<str[i];
          }

      }

    return 0;
}

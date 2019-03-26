#include <QCoreApplication>
#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

long reverse(long num);


int main(int argc, char *argv[])
{
    long number;
    cout<<"Enter your number: ";
    cin>>number;
    if(number>0)
      {
       number = reverse(number);

      }
    else
      {
        number = -(reverse(-number));
      }
   cout<<endl<<number;

    return 0;

}

long reverse(long num)
{
    long len;
    char string[10];
    char buf1[10];
    itoa(num,string,10);
    len = strlen(string);

    for(int i = 0; i<len; i++)
      {

        buf1[i] = string[(len-1)-i];

      }
    num = atoi(buf1);
    return num;
}

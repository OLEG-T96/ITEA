#include <QCoreApplication>
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{


    long num;
    int bit;
    cout<<"Enter number ";
    cin>>num;
    cin>>bit;


        if((num>>bit)&1)
          {
            cout<<endl<<"Yes";
          }
        else
          {
            cout<<endl<<"No";
          }


    return 0;
}

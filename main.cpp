#include <QCoreApplication>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int blocks;

int main(int argc, char *argv[])
{
   // QCoreApplication a(argc, argv);

    cout<<"Input number of blocks ";
    cin>>blocks;
    int stars,space;
    int counter =0;
    stars = (blocks*2-1);
    space = ((stars-1)/2);
    for(int i =0;i<=stars;i+=2 )
      {
        for(int j=(space-counter);j>0;j--)
           {
             cout<<" ";
           }
        for(int x=0;x<=i;x++)
           {
             cout<<"*";
           }
        cout<<endl;
        counter++;

      }

   return 0;
   // return a.exec();
}

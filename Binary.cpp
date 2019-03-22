#include <QCoreApplication>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char *argv[])
{
   int a,b=0;
   cout<<"Enter number ";
   cin>>a;

   for(int i=0;i<16;i++)
     {
       if((a>>i)&1)
         {
           b++;
         }
     }
   cout<<endl<<b;

    return 0;
}

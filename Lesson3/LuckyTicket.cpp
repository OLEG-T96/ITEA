#include <QCoreApplication>
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int get_sum(int a);

int main(int argc, char *argv[])
{
   int number;
   int Lpart,Rpart;
   cout<<"Enter your number : ";
   cin>>number;

   Rpart = get_sum(number);
   Lpart = get_sum(number/1000);

   if(Lpart == Rpart)
     {
       cout<<endl<<"Your ticket is lucky";
     }
   else
     {
       cout<<endl<<"Try again";
     }


   return 0;
}

int get_sum(int a)
   {
      int sum =0;
      for(int i = 0; i < 3; i++)
         {
           sum += ((a/(int)pow(10,i)) %10);
         }
      return sum;
   }

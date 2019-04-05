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
  const int ArrSize = 10;
  int Array[ArrSize];
  cout<<"Before sort: ";
    for(int i = 0; i < ArrSize; i++)
      {
         Array[i] = rand() % 20;
         cout<<Array[i]<<" ";
      }
    for(int j = 1; j < (ArrSize-1); j++)
       {
         for(int i = 0; i < (ArrSize - j); i++)
            {
              if(Array[i] > Array[i+1] )
                {
                  int buf = Array[i+1];
                  Array[i+1] = Array[i];
                  Array[i] = buf;
                }
            }
       }
    cout<<endl<<"Bubble sort: ";
    for(int i = 0; i < ArrSize; i++)
      {
        cout<<Array[i]<<" ";
      }

    return 0;
}

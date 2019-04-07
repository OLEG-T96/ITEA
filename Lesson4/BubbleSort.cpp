#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

void FillRandMass (int *Arr, unsigned ArrSize, int range)
{
    for(unsigned i = 0; i < ArrSize; ++i)
       {
          Arr[i] = rand() % range;
       }
}
double BubbleSort(int *Arr, unsigned ArrSize)
{
    long start_time =  clock();
    int buf;
    for(unsigned j = 1; j < (ArrSize-1); ++j)
       {
         for(unsigned i = 0; i < (ArrSize - j); ++i)
            {
              if(Arr[i] > Arr[i+1] )
                {
                  buf = Arr[i+1];
                  Arr[i+1] = Arr[i];
                  Arr[i] = buf;
                }
            }
       }
    long end_time = clock();
    return (end_time - start_time);
}

double Quicksort(int *array, int low, int high)
{
    long start_time =  clock();
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int buf;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            buf = array[i];
            array[i] = array[j];
            array[j] = buf;
            i++;
            j--;
        }
    }
    if (j > low)
        Quicksort(array, low, j);
    if (i < high)
        Quicksort(array, i, high);
    long end_time = clock();
    return (end_time - start_time);
}

int main(int argc, char *argv[])
{
   cout<<"Enter Mass Size ";
   unsigned Size;
   cin>>Size;
   int *Array = new int[Size];
   cout<<"Before sort: ";
   FillRandMass(Array, Size, 100);
   for(unsigned i = 0; i < Size; ++i)
      {
         cout<<Array[i]<<" ";
      }
   cout<<endl;
   cout<<endl<<"Time for BubbleSort: "<<BubbleSort( Array, Size )<<" ms";
   cout<<endl;
   FillRandMass(Array, Size, 100);
   cout<<endl<<"Time for Qsort: "<<Quicksort( Array, 0 , Size)<<" ms";

    return 0;
}

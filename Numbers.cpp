#include <QCoreApplication>
#include <iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

int number, n=1,buf;
float average=0,sum=0;

int main(int argc, char *argv[])
{
        cout<<"Enter your number:";
        cin >> number;
        buf =number;
        while ((buf/=10) > 0) n++;
        for(int i=0;i<n;i++)
          {
            sum+=((number/(int)(pow(10,i))) % 10);
          }
        cout<<endl<<"Sum: "<<sum;
        average = sum/n;
        cout<<endl<<"Average: "<<average;

        return 0;
}

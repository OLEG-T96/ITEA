#include <QCoreApplication>
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;


const int coef_2 =2;
const int coef_4 =4;

int a,b,c,D;



int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);


    cout<<"a = ";
    cin>>a;
      if(a == 0)
        {
         cout<<endl<<"a cannot be  0";
         return 0;
        }
    cout<<endl<<"b = ";
    cin>>b;
    cout<<endl<<"c = ";
    cin>>c;

    D =(pow(b,2)-4*a*c);

    if(D > 0 )
        {
          cout<<endl<<"x1 = "<<((-b + sqrt(D))/2*a);
          cout<<endl<<"x1 = "<<((-b - sqrt(D))/2*a);
        }
    else if(D == 0)
        {
          cout<<endl<<"x1 = "<<(-b/2*a);
        }
    else
        {
           cout<<endl<<"D<0";
           return 0;
        }


   return 0;
   // return app.exec();
}

#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

string removeSpaces(string input);

int main(int argc, char *argv[])
{

  int number,sum = 0;
  string str;

  getline( cin,str);
  str = removeSpaces(str);
  number = std::stoi(str);

  for(int i = 0; i < (str.length()); i++)
    {
      sum+=((number/(int)(pow(10,i))) % 10);
    }

  if(sum%3)
    {
      cout<<endl<<"No";
    }
   else
    {
      cout<<endl<<"Yes";
    }


    return 0;
}

string removeSpaces(string input)
{

  input.erase(remove_if(input.begin(), input.end(), isspace),input.end());
  return input;
}

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string select (string output, unsigned start, unsigned end)
{
    unsigned len = (end - start);
    char tmp[20]{};

    for(unsigned i = (start-1), j = 0; i < end; ++i, ++j)
      {
         tmp[j] = output[i];
      }
    tmp[end] = '\0';
    return tmp;
}
int main()
{
   string UserData;
   string TextBuff;
   string CommandBuff;
   unsigned start_pos{0}, end_pos{0}, cursor{0};

   cout<<"Type 'quit' to finish program "<<endl;

 for(;;)
 {
   cin>>CommandBuff;
   if (CommandBuff == "print")
     {
         cin>>TextBuff;
         UserData = TextBuff;
         cursor += TextBuff.length();
         cout<<"->"<<cursor<<"\t\t"<<UserData<<endl;
     }
   else if(CommandBuff == "select")
     {
        cin>>start_pos;
        cin>>end_pos;
        TextBuff = select(UserData,start_pos, end_pos);
        cout<<"->"<<cursor<<"\t\t"<<UserData<<endl;
     }
   else if(CommandBuff == "copy")
     {
        cin>>start_pos;
        cin>>end_pos;
        TextBuff = select(UserData,start_pos, end_pos);
        cursor += (end_pos - start_pos);
        cout<<"->"<<cursor<<"\t\t"<<UserData<<endl;
     }
   else if(CommandBuff == "paste")
     {
        string beg;
        string end;
        beg = select(UserData,1,cursor);
        end = select(UserData,(cursor + 1),UserData.length());
        UserData = beg + TextBuff + end;
        cursor += TextBuff.length();
        cout<<"->"<<cursor<<"\t\t"<<UserData<<endl;

     }
   else if(CommandBuff == "move")
     {
         cin>>CommandBuff;
         unsigned pos;
         if(CommandBuff == "left")
           {
             cin>>pos;
             cursor -= pos;
             cout<<"->"<<cursor<<"\t\t"<<UserData<<endl;
           }
         else if(CommandBuff == "right")
           {
             cin>>pos;
             cursor += pos;
             cout<<"->"<<cursor<<"\t\t"<<UserData<<endl;
           }
         else
           {
             cout<<"Wrong argument";
           }
     }
   else if(CommandBuff == "cut")
     {
       string beg;
       string end;
       beg = select(UserData, 1, (start_pos -1));
       end = select(UserData, (end_pos+1), UserData.length());
       UserData = beg + end;
       cursor = UserData.length();
       cout<<"->"<<cursor<<"\t\t"<<UserData<<endl;
     }
   else if(CommandBuff == "quit")
     {
         return 0;
     }
   else
    {
       cout<<"Wrong argument"<<endl;
    }
 }

    return 0;
}

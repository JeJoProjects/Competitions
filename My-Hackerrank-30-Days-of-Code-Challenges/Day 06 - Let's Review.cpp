#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main()
{
   int T=0, Len=0;
   string TEMP,temp;
   vector<char> sVec1, sVec2;
   vector<string> All;
   cin>>T;
   if(T>=1 && T<=10)
   {
      for(int i=0; i<T; ++i)
      {
         cin>>TEMP;
         All.push_back(TEMP);

      }
      for(vector<string>::iterator itr=All.begin();
                                    itr!=All.end(); ++itr)
      {
         temp=*itr;
         Len=temp.length();
         if(Len>=2 && Len<=10000)
         {
            for(int j=0; j<Len; ++j) // separation of char
               {
                  if(j%2==0)
                     sVec1.push_back(temp.at(j));
                  else
                     sVec2.push_back(temp.at(j));
               }
            for(vector<char>::iterator jj=sVec1.begin();
                                        jj!=sVec1.end(); ++jj)
               cout<<*jj;
            cout<<" ";
            for(vector<char>::iterator jj=sVec2.begin();
                                        jj!=sVec2.end(); ++jj)
               cout<<*jj;
            cout<<endl;
            sVec1.clear();
            sVec2.clear();
         }
      }
   }
    return 0;
}

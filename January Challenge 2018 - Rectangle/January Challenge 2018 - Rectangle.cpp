#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
   unsigned int T=0; //T denoting the number of test cases.
   cin>>T;
   if(1 <= T && T<=1000)
   {
      for(unsigned int queri=0; queri<T; ++queri)
      {
         vector<unsigned int> rect(4);
         vector<unsigned int>::iterator itr;
         for(itr=rect.begin(); itr!=rect.end(); ++itr)
            cin>>*itr;

         sort(rect.begin(), rect.end());
         bool ans=true;
         for(unsigned int i=0; i<4; i=i+2)
            if(rect[i]!=rect[i+1])
               ans=false;

         (ans)? cout<<"YES"<<endl : cout<<"NO"<<endl;

         /*set<unsigned int> mySet;
         unsigned int temp=0;
         for(unsigned int i=0; i<4; ++i)
         {
            cin>>temp;
            mySet.insert(temp);
         }
         mySet.size()==2 ? cout<<"YES"<<endl : cout<<"NO"<<endl;*/
      }
   }
   return 0;
}

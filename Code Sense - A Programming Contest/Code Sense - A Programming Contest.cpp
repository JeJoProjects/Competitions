#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <iterator>
using namespace std;
#define ull unsigned long long int
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   ull T=0; cin>>T;
   for(auto t=0; t<T; ++t)
   {
      ull size, temp=0;   cin>>size;
      list<ull> mylist;
      set<ull> repested;

      cin>>temp;    // first value
      mylist.push_back(temp);

      for(auto it=1; it<size; ++it)
      {
         cin>>temp;
         list<ull>::iterator itr=find(mylist.begin(), mylist.end(), temp);
         if(itr==mylist.end())
            mylist.push_back(temp);
         else
         {
            mylist.erase(itr);
            repested.insert(temp);
         }
      }

      for(auto itr=repested.begin(); itr!=repested.end(); ++itr)
      {
         auto i=find(mylist.begin(), mylist.end(), *itr);
         if(i!=mylist.end())
            mylist.erase(i);
      }

      for(auto it: mylist)
         cout<<it<<" ";

      cout<<endl;

      // OR but following will sort automatically
      /*set<ull> vec;
      set<ull> repested;


      for(auto itr=0; itr<size; ++itr)
      {
         ull temp;
         cin>>temp;
         pair<set<ull>::iterator, bool> ret;
         ret=vec.insert(temp);
         if(ret.second==false)
            repested.insert(temp);
      }

      for(auto itr=repested.begin(); itr!=repested.end(); ++itr)
         vec.erase(*itr);

      for(auto &it: vec)
         cout<<it<<" ";

         cout<<endl;*/
   }
   return 0;
}

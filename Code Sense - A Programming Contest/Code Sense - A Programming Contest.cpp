#include <iostream>
#include <algorithm>
#include <std::vector>
#include <std::set>
#include <list>
#include <iterator>

using uint64 = unsigned long long int;
int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(0);

   uint64 T=0; std::cin>>T;
   for(auto t=0; t<T; ++t)
   {
      uint64 size, temp=0;   std::cin>>size;
      list<uint64> mylist;
      std::set<uint64> repested;

      std::cin>>temp;    // first value
      mylist.push_back(temp);

      for(auto it=1; it<size; ++it)
      {
         std::cin>>temp;
         list<uint64>::iterator itr=find(mylist.begin(), mylist.end(), temp);
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
         std::cout<<it<<" ";

      std::cout<<std::endl;

      // OR but following will sort automatically
      /*std::set<uint64> vec;
      std::set<uint64> repested;


      for(auto itr=0; itr<size; ++itr)
      {
         uint64 temp;
         std::cin>>temp;
         pair<std::set<uint64>::iterator, bool> ret;
         ret=vec.insert(temp);
         if(ret.second==false)
            repested.insert(temp);
      }

      for(auto itr=repested.begin(); itr!=repested.end(); ++itr)
         vec.erase(*itr);

      for(auto &it: vec)
         std::cout<<it<<" ";

         std::cout<<std::endl;*/
   }
   return 0;
}

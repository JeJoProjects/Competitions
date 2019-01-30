#include <iostream>
#include <algorithm>
#include <std::vector>
#include <std::set>
#include <list>
#include <iterator>

using ull = unsigned long long int;

int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(0);

   ull T=0; std::cin>>T;
   for(auto t=0; t<T; ++t)
   {
      ull size;  std::cin>>size;

      std::vector<ull> vec;
      for(auto i=0; i<size; ++i)
      {
         ull temp=0, Dig=0;
         std::cin>>temp;
         while(temp>0)
         {
            Dig=temp%10;
            vec.push_back(Dig);
            temp/=10;
         }
      }
      sort(vec.begin(), vec.end());
      for(auto itr=vec.rbegin(); itr!=vec.rend(); ++itr)
         std::cout<<*itr;
   }
   return 0;
}

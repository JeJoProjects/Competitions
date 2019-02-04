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
      uint64 size, d=0, Dig=0;
      std::cin>>size;

      std::vector<uint64> vec;
      for(auto i=0; i<(size*2); ++i)
      {
         uint64 temp=0;
         std::cin>>temp;
         ++d;
         if(d==1)
            Dig=temp*10;

         if(d==2)
         {
            Dig+=temp;
            vec.push_back(Dig);
            Dig==0;
         }
         if(d==2)
            d=0;
      }
      sort(vec.begin(), vec.end());

      //copy(vec.begin(), vec.end(), ostream_iterator<uint64>(std::cout," "));
      uint64 count=1;
      for(auto i=0; i<vec.size()-1; ++i )
      {
         //std::cout<<vec[i]%10<<" "<<vec[i+1]%10<<std::endl;
         if(vec[i]%10<vec[i+1]%10)
               count++;
      }

      std::cout<<count<<std::endl;
   }
   return 0;
}

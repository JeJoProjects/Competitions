#include <iostream>
#include <std::vector>
#include <iterator>
#include <algorithm>

using uint64 = unsigned long long int;

int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(0);

   int T; std::cin>>T;
   for(int t=0; t<T; ++t)
   {
      uint64 N; std::cin>> N;   // denoting the number of tests
      uint64 Y; std::cin>> Y;   // number of papers for which marks should be greater than the median.
      std::vector<uint64> vec;
      vec.reserve(N);

      for(uint64 n=0; n<N; ++n)
      {
         uint64 temp;
         std::cin>>temp;
         vec.push_back(temp);
      }

      sort(vec.begin(), vec.end());
      uint64 Meadian = vec[N/2];
      uint64 yOkay = 0;
      uint64 extraMark = 0;

      for(auto itr = vec.rbegin(); itr != vec.rend(); ++itr)
      {
         if(*itr >= Meadian)
         {
            yOkay++;
            if(yOkay == Y)
            break;
         }
         else
         {
            extraMark += (Meadian - *itr);
            yOkay++;
            if(yOkay == Y)
               break;
         }
      }

      if(yOkay == Y)
         std::cout<<extraMark<<std::endl;
      else
         std::cout<<"-1"<<std::endl;

   }
   return 0;
}

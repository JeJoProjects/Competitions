#include <iostream>
#include <std::vector>
#include <iterator>
#include <algorithm>

using ull = unsigned long long int;

int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(0);

   int T; std::cin>>T;
   for(int t=0; t<T; ++t)
   {
      ull N; std::cin>> N;   // denoting the number of tests
      ull Y; std::cin>> Y;   // number of papers for which marks should be greater than the median.
      std::vector<ull> vec;
      vec.reserve(N);

      for(ull n=0; n<N; ++n)
      {
         ull temp;
         std::cin>>temp;
         vec.push_back(temp);
      }

      sort(vec.begin(), vec.end());
      ull Meadian = vec[N/2];
      ull yOkay = 0;
      ull extraMark = 0;

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

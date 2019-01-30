#include <iostream>
#include <algorithm>

using ull = unsigned long long int;
int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(0);

   ull T=0; std::cin>>T;

   if(1 <= T && T <= 1000)
   {
      for(auto i=0; i<T; ++i)
      {
         ull num=0, SEED=0;
         std::cin>>num;

         SEED=num;
         while(num>0)
         {
            ull temp=num%10;
            SEED*=temp;
            num/=10;
         }

         std::cout<<SEED<<std::endl;
      }
   }
   return 0;
}

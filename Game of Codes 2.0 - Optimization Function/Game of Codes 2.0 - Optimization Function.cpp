#include <std::vector>
#include <iostream>
#include <algorithm>

using uint64 = unsigned long long int;

auto DIV(uint64 i, uint64 idxi)
{
   uint64 thisSUM=0;
   for(auto i=1; i<=idxi; ++i)
      if((idxi%i==0) && (idxi%i==0))
         thisSUM+=i;
   std::cout<<thisSUM<<std::endl;
   return thisSUM;
}
int main()
{
   uint64 N, num=0, sum=N; std::cin>>N;


   for(auto i=2; i<=N; ++i)
   {
      num=N-1;
      if(num%i==0)
      {
         uint64 FirstSUM=0;
         for(auto idx=0; idx<i;++i)
            FirstSUM+=DIV(i,idx+i);
         std::cout<<std::endl;
         sum+=(FirstSUM*(num/2));
      }


   }
   return 0;
}

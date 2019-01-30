#include <std::vector>
#include <iostream>
#include <algorithm>

using ull = unsigned long long int;

auto DIV(ull i, ull idxi)
{
   ull thisSUM=0;
   for(auto i=1; i<=idxi; ++i)
      if((idxi%i==0) && (idxi%i==0))
         thisSUM+=i;
   std::cout<<thisSUM<<std::endl;
   return thisSUM;
}
int main()
{
   ull N, num=0, sum=N; std::cin>>N;


   for(auto i=2; i<=N; ++i)
   {
      num=N-1;
      if(num%i==0)
      {
         ull FirstSUM=0;
         for(auto idx=0; idx<i;++i)
            FirstSUM+=DIV(i,idx+i);
         std::cout<<std::endl;
         sum+=(FirstSUM*(num/2));
      }


   }
   return 0;
}

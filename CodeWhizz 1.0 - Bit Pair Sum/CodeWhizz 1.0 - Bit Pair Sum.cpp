#include <iostream>
#include <std::vector>
#include <algorithm>
#include <iterator>

using uint64 = unsigned long long int;

uint64 bitPairSum(uint64 x)
{
   std::vector<int> binary;
   do                               // simplest
      binary.push_back( x & 1 );    //       binary
   while ( x >>= 1 );

   uint64 sum=0;
   for(auto it1=binary.rbegin(); it1!=binary.rend()-1; ++it1)
      for(auto it2=it1+1      ; it2!=binary.rend()  ; ++it2)
      {
         int deci=( (*it1)*10 ) + (*it2); //<<*it1<<"S "<<*it2<<std::endl;
         if(deci==1)          sum+=1;
         else if(deci==10)    sum+=2;
         else if(deci==11)    sum+=3;
      }
   return sum;
}
int main()
{
   ios::sync_with_stdio(0);
   std::cin.tie(0);
   std::cout.tie(0);
   uint64 T=0; std::cin>>T;

   for(auto t=0; t<T;++t)
   {
      uint64 N=0;
      std::cin>>N;

      std::cout<<bitPairSum(N)<<std::endl;
   }
   return 0;
}

#include <iostream>
#include <limits>

#define uint64 unsigned  long long int

int main()
{
   uint64 N=0,sum=0, temp=0;
   std::cin>>N;
   for(uint64 i=0; i<N; ++i)
   {
      std::cin>>temp;
      sum+=temp;
   }

   for(uint64 idx=1; idx<=numeric_limits<uint64>::max(); ++idx)
       if(sum < idx*N  )
         {
         std::cout<<idx<<std::endl;
         break;
         }

   return 0;
}

#include <iostream>
#include <limits>

#define ull unsigned  long long int

int main()
{
   ull N=0,sum=0, temp=0;
   std::cin>>N;
   for(ull i=0; i<N; ++i)
   {
      std::cin>>temp;
      sum+=temp;
   }

   for(ull idx=1; idx<=numeric_limits<ull>::max(); ++idx)
       if(sum < idx*N  )
         {
         std::cout<<idx<<std::endl;
         break;
         }

   return 0;
}

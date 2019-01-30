#include <iostream>
#include <std::vector>
#include <algorithm>
#include <iterator>


unsigned long Destination(unsigned long long int N)
{
   if (N==0 || N==1)
      return 0;
   else
   {
   unsigned long COUNT=0;
   for(unsigned long i=1; N!=1; ++i)
   {
      if(N%3==0)           N=(N/3);
      else if((N-1)%3==0)  N=(N-1);
      else if((N+1)%3==0)  N=(N+1);

      COUNT=i;
   }
   return COUNT;

   }
}

int main()
{
   ios::sync_with_stdio(0);
   std::cin.tie(0);
   std::cout.tie(0);

   unsigned int T=0; std::cin>>T;

   for(auto t=0; t<T;++t)
   {
      unsigned long long int N=0;
      std::cin>>N;

      std::cout<<Destination(N)<<std::endl;
   }
}

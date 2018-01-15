#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

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
   cin.tie(0);
   cout.tie(0);

   unsigned int T=0; cin>>T;

   for(auto t=0; t<T;++t)
   {
      unsigned long long int N=0;
      cin>>N;

      cout<<Destination(N)<<endl;
   }
}

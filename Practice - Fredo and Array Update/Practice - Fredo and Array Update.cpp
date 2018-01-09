#include <iostream>
#include <limits>
using namespace std;
#define ull unsigned  long long int

int main()
{
   ull N=0,sum=0, temp=0;
   cin>>N;
   for(ull i=0; i<N; ++i)
   {
      cin>>temp;
      sum+=temp;
   }

   for(ull idx=1; idx<=numeric_limits<ull>::max(); ++idx)
       if(sum < idx*N  )
         {
         cout<<idx<<endl;
         break;
         }

   return 0;
}

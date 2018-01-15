#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
#define ull unsigned long long int

ull bitPairSum(ull x)
{
   vector<int> binary;
   do                               // simplest
      binary.push_back( x & 1 );    //       binary
   while ( x >>= 1 );

   ull sum=0;
   for(auto it1=binary.rbegin(); it1!=binary.rend()-1; ++it1)
      for(auto it2=it1+1      ; it2!=binary.rend()  ; ++it2)
      {
         int deci=( (*it1)*10 ) + (*it2); //<<*it1<<"S "<<*it2<<endl;
         if(deci==1)          sum+=1;
         else if(deci==10)    sum+=2;
         else if(deci==11)    sum+=3;
      }
   return sum;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   ull T=0; cin>>T;

   for(auto t=0; t<T;++t)
   {
      ull N=0;
      cin>>N;

      cout<<bitPairSum(N)<<endl;
   }
   return 0;
}

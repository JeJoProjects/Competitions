#include <iostream>
#include <cmath>
using namespace std;
#define ull unsigned long long

ull sumOfGroup(ull k)
{
   ull sum=1;
   for(auto i=0; i<3; ++i)
      sum*=k;         // the requirement is same as cube of the given number
   return sum;
}

int main()
{
   ull k; //kthe th group.
   cin >> k;
   if(1<=k && k<=1000000)
   {
      ull answer = sumOfGroup(k);
      cout << answer << endl;
      // or simply
      //cout<<k*k*k<<endl;
   }
   return 0;
}

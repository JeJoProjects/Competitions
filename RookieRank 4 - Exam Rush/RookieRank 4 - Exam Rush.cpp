#include <bits/stdc++.h>
using namespace std;

typedef unsigned int             uint16;
typedef unsigned long int        uint32;
typedef unsigned long long int   uint64;


int main()
{
   uint64 n;
   uint64 t;

   cin>>n>>t;

   vector<uint64> vec;  vec.reserve(n);
   copy_n(istream_iterator<uint64>(cin), n, back_inserter(vec));
   sort(vec.begin(), vec.end());

   uint64 sum = 0;
   uint64 count =0;
   for(uint64 i = 0; i<n; ++i)
    {
        sum+= vec[i];
        if(sum<= t)  ++count;
        else           break;
    }
   cout<<count<<endl;
   return 0;
}

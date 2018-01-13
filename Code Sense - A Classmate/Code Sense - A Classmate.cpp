#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <iterator>
using namespace std;
#define ull unsigned long long int

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   ull T=0; cin>>T;
   for(auto t=0; t<T; ++t)
   {
      ull size;  cin>>size;

      vector<ull> vec;
      for(auto i=0; i<size; ++i)
      {
         ull temp=0, Dig=0;
         cin>>temp;
         while(temp>0)
         {
            Dig=temp%10;
            vec.push_back(Dig);
            temp/=10;
         }
      }
      sort(vec.begin(), vec.end());
      for(auto itr=vec.rbegin(); itr!=vec.rend(); ++itr)
         cout<<*itr;
   }
   return 0;
}

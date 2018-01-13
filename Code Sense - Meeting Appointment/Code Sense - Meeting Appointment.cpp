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
      ull size, d=0, Dig=0;
      cin>>size;

      vector<ull> vec;
      for(auto i=0; i<(size*2); ++i)
      {
         ull temp=0;
         cin>>temp;
         ++d;
         if(d==1)
            Dig=temp*10;

         if(d==2)
         {
            Dig+=temp;
            vec.push_back(Dig);
            Dig==0;
         }
         if(d==2)
            d=0;
      }
      sort(vec.begin(), vec.end());

      //copy(vec.begin(), vec.end(), ostream_iterator<ull>(cout," "));
      ull count=1;
      for(auto i=0; i<vec.size()-1; ++i )
      {
         //cout<<vec[i]%10<<" "<<vec[i+1]%10<<endl;
         if(vec[i]%10<vec[i+1]%10)
               count++;
      }

      cout<<count<<endl;
   }
   return 0;
}

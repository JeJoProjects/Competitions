#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
#define ull unsigned long long int

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int T; cin>>T;
   for(int t=0; t<T; ++t)
   {
      ull N; cin>> N;   // denoting the number of tests
      ull Y; cin>> Y;   // number of papers for which marks should be greater than the median.
      vector<ull> vec;
      vec.reserve(N);

      for(ull n=0; n<N; ++n)
      {
         ull temp;
         cin>>temp;
         vec.push_back(temp);
      }

      sort(vec.begin(), vec.end());
      ull Meadian = vec[N/2];
      ull yOkay = 0;
      ull extraMark = 0;

      for(auto itr = vec.rbegin(); itr != vec.rend(); ++itr)
      {
         if(*itr >= Meadian)
         {
            yOkay++;
            if(yOkay == Y)
            break;
         }
         else
         {
            extraMark += (Meadian - *itr);
            yOkay++;
            if(yOkay == Y)
               break;
         }
      }

      if(yOkay == Y)
         cout<<extraMark<<endl;
      else
         cout<<"-1"<<endl;

   }
   return 0;
}

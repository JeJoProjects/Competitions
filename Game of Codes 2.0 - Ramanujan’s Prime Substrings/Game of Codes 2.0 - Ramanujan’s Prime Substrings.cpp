#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define ull unsigned long long int
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   ull T=0; cin>>T;
   for(unsigned long long int t=0; t<T; ++t)
   {
      vector<ull> vec={2, 3, 5, 7};
      ull count=0;
      string str;

      cin>>str; reverse(str.begin(), str.end());

      ull Dig=atoi(str.data());

      for(ull i=0; i<6; ++i)
      {
         ull temp=Dig%10;
         auto it = find (vec.begin(), vec.end(), temp);
         if (it != vec.end())
            count++;
         Dig/=10;
      }

      cout<< count<<endl;
   }
    return 0;
}

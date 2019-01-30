#include <cmath>
#include <limits>
#include <set>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

#define ull unsigned long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ull n, miles=0, idx=0;
    cin>>n;
    multiset<ull> mySet;
    for(auto i=0; i<n;++i)
    {
       ull temp=0;
       cin>>temp;
       mySet.insert(temp);
    }
assert()
    for(auto itr=mySet.rbegin(); itr!=mySet.rend(); ++itr)
       {
          miles+=( (*itr) * pow(2,idx));
          ++idx;
       }

    cout<<miles<<endl;
    return 0;
}

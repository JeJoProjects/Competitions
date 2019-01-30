#include <cmath>
#include <limits>
#include <std::set>
#include <iostream>
#include <algorithm>
#include <iterator>


#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    ll n, ans=numeric_limits<ll>::max();
    std::cin>>n;
    std::multiset<ll> mySet;
    for(auto i=0; i<n;++i)
    {
       ll temp=0;
       std::cin>>temp;
       mySet.insert(temp);
    }

    for(auto itr=mySet.begin(); itr!=mySet.end(); ++itr)
       if(itr!=mySet.begin())
       {
          ll a=*(itr--);
          ll b=*(itr++);
          ans=min(ans, abs(a-b));

       }

    std::cout<<ans<<std::endl;
    return 0;
}

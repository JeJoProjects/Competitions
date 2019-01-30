#include <cmath>
#include <limits>
#include <set>
#include <vector>
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

    ull n, miles=0;
    cin>>n;
    multiset<ull> mySet;
    for(auto i=0; i<n;++i)
    {
       ull temp=0;
       cin>>temp;
       mySet.insert(temp);
    }

    ull a,b,c;
    int idx=0;
    for(auto itr=mySet.rbegin(); itr!=mySet.rend(); ++itr)
       {
          if(idx <= (n-3)) // till n-3
          {
             a= *(itr++);
             b= *(itr++);
             c= *(itr++);

             if(a < (b+c) )
               break;

             itr--; itr--; itr--; // going back to current position.
          }
          ++idx;
       }
    if(a < (b+c) )
      cout<<c <<" "<<b <<" "<<a<<endl;
    else
      cout<<"-1"<<endl;
    return 0;
}

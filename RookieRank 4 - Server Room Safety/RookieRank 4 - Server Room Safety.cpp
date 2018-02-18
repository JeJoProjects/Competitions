#include <bits/stdc++.h>
using namespace std;

template<typename T>
constexpr string collisionCheck(T &n, vector<T> &height, vector<T> &position)
{
    T sumFront    = 0;
    T sumBack     = 0;

    T frontMax    = position[0]  +height[0];
    T backMax     = position[n-1]-height[n-1];

    bool Front      = true;
    bool Back       = true;

    for(T idx = 1; idx<n; ++idx) // forward
    {
        frontMax = max(position[idx-1]+height[idx-1], frontMax);
        (frontMax >= position[idx]) ? sumFront++ : Front = false;
    }

    for(T backIdx = n-2; backIdx>=0 ; --backIdx)    // backward
    {
        backMax = min(position[backIdx+1] - height[backIdx+1], backMax);
        (backMax <= position[backIdx]) ? sumBack++: Back = false;
    }

    T sum = sumFront - sumBack ;

    if( (Front || Back) && (sum == 0))      return "BOTH";
    if((Front) && (sum != 0) )              return "LEFT";
    if( (Back) && (sum != 0) )              return "RIGHT";
    else                                    return "NONE" ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;

    vector<int> position;
    position.reserve(n);
    copy_n(istream_iterator<int>(cin), n, back_inserter(position));

    vector<int>  height;
    height.reserve(n);
    copy_n(istream_iterator<int>(cin), n, back_inserter(height));

    cout<<collisionCheck(n, height, position)<<endl;

    return 0;
}

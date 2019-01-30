#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;
typedef unsigned long long int uint64;

inline uint64 CoinChangeProblem(int &targetAmt, int &denomination, vector<int> &coins)
{
    vector<uint64> targetVec(targetAmt+1); // to store all target amounts
    for(auto idx = 0; idx<denomination; ++idx)
    {
        if(idx == 0)    targetVec[idx] = 1;

        for(auto i=0; i< targetAmt+1; ++i)
        {
            int amt = i;                    // here array index = amount
            if(amt>=coins[idx])
                targetVec[amt] +=targetVec[amt-coins[idx]];
        }
    }
    //for(auto &it: targetVec)
        //cout<<it<<" ";
    return targetVec[targetAmt];
}

int main()
{
    int targetAmt, denomination;
    cin>>targetAmt;             // target amount,
    cin>>denomination;          // number of denominations

    vector<int> coins; coins.reserve(denomination);
    copy_n(istream_iterator<int>(cin), denomination, back_inserter(coins));

    cout<<CoinChangeProblem(targetAmt, denomination, coins)<<endl;
    return 0;
}

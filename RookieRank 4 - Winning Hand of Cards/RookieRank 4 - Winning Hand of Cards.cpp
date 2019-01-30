#include <bits/stdc++.h>


typedef unsigned long int        uint32;
typedef unsigned long long int   uint64;

template<typename T64, typename T32>
inline T64 WinningHandOfCards(T32 &_size, T32 &modulo, T32 &targetX, std::vector<T64> &values)
{
    std::vector<T64> mVec(modulo);   // to store the count of m atarting from 0 to m-1
    std::vector<T64> tempVec;        // to store mVec temporarly
    T64 index ;

    for(T32 i =0; i<_size; ++i)
    {
        if(i==0)                // for the first variable find "vec[i]%mod"
        {
           index = values[i]%modulo ;
           mVec[index] += 1;
           tempVec = mVec;
        }
        else
        {
            for(T64 preIdx = 0; preIdx < modulo; ++preIdx)
            {
                if(tempVec[preIdx] != 0)    // do for non-zero value in mVec
                {
                    index        = (preIdx * values[i])%modulo; // store the modulo of
                    mVec[index] += tempVec[preIdx];
                }
            }
            index = values[i]%modulo ;      // find modulo of current element
            mVec[index] += 1;               // increment coresponding count by one in mVec

            tempVec = mVec;                 // tempVec is now mVec for the next iteration
        }
    }
    return mVec[targetX];                   // return only the count of required module value
}

int main()
{
    ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    uint32 n;           //number of cards,
    uint32 modulo;      //the modulo divisor
    uint32 targetX;     //target value respectively.
    std::cin>> n >> modulo >> targetX;

    std::vector<uint64> values;
    values.reserve(n);
    copy_n(istream_iterator<uint64>(std::cin), n, back_inserter(values));

    std::cout<<WinningHandOfCards(n, modulo ,targetX ,values)<<std::endl;
    return 0;
}

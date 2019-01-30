/** Terminated due to timeout */
#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
#define speed std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr)
typedef unsigned long long int uint64;

int main()
{
    speed;
    uint64 N; std::cin>>N;
    uint64 k; std::cin>>k;
    std::vector<uint64> vec;
    vec.reserve(N);
    std::copy_n(std::istream_iterator<uint64>(std::cin), N, back_inserter(vec));
    std::sort(vec.begin(), vec.end());

    uint64 answer = std::numeric_limits<uint64>::max();
    for(size_t i=0; i<=N-k; ++i)
    {
        auto MAX =  vec[i+k-1];
        auto MIN =  vec[i];
        answer = std::min( answer, (MAX - MIN) );
        //std::cout<<answer<<" "<<MIN<<" "<<MAX<<" "<<i<<"\n";
    }
    std::cout<<answer<<std::endl;
    return 0;
}

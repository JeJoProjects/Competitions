#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>
#define speed std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr)

int main()
{
    speed;
    int N; std::cin>>N; //the number of clouds
    int K; std::cin>>K; //the jump distance
    assert(2<=N &&  N<=100);

    std::vector<int> vec; vec.reserve(N);
    copy_n(std::istream_iterator<int>(std::cin), N, back_inserter(vec));

    int Energy = 100;
    for(size_t i=0; i<vec.size(); i += K)
        (vec[i]==1) ? Energy -= 3: --Energy;

    std::cout << Energy << std::endl;
    return 0;
}

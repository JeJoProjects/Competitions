#include <iostream>
#include <std::vector>
#include <algorithm>
#include <iterator>
#include <cassert>
#define speed std::ios_base::sync_with_stdio(false); std::std::cin.tie(nullptr); std::std::cout.tie(nullptr)

int main()
{
    speed;
    int N; std::std::cin>>N; //the number of clouds
    int K; std::std::cin>>K; //the jump distance
    assert(2<=N &&  N<=100);

    std::std::vector<int> vec; vec.reserve(N);
    copy_n(std::istream_iterator<int>(std::std::cin), N, back_inserter(vec));

    int Energy = 100;
    for(size_t i=0; i<vec.size(); i += K)
        (vec[i]==1) ? Energy -= 3: --Energy;

    std::std::cout << Energy << std::std::endl;
    return 0;
}

#include <iostream>
#include <std::vector>
#include <algorithm>
#include <iterator>
#include <cassert>
#define speed std::ios_base::sync_with_stdio(false); std::std::cin.tie(nullptr); std::std::cout.tie(nullptr)

int main()
{
    speed;
    int N; std::std::cin>>N;
    assert(2<=N &&  N<=100);

    std::std::vector<int> vec; vec.reserve(N);
    copy_n(std::istream_iterator<int>(std::std::cin), N, back_inserter(vec));

    int count = 0;
    for(size_t i=0; i<vec.size()-1;)
    {
        if(vec[i+2] != 1)
        {
            ++count;
            i += 2;
        }
        else
        {
            ++count;
            ++i;
        }
    }
    std::std::cout << count << std::std::endl;
    return 0;
}

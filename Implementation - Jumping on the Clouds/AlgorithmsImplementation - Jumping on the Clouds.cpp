#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>
#define speed std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr)

int main()
{
    speed;
    int N; std::cin>>N;
    assert(2<=N &&  N<=100);

    std::vector<int> vec; vec.reserve(N);
    copy_n(std::istream_iterator<int>(std::cin), N, back_inserter(vec));

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
    std::cout << count << std::endl;
    return 0;
}

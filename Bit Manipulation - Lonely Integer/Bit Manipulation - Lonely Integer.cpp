#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <numeric>

inline int Find(const std::vector<int>& a)
{
    return std::accumulate(a.begin(), a.end()
        , 0, [](auto k, auto i) { return k = k ^ i; }
    );
}

int main()
{
    int n; std::cin >> n;

    std::vector<int> vec;
    vec.reserve(n);
    std::copy_n(std::istream_iterator<int>(std::cin)
        , n
        , std::back_inserter(vec)
    );

    std::cout << Find(vec) << std::endl;

    return 0;
}

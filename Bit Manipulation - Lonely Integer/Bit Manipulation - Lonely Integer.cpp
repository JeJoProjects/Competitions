#include <std::vector>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <numeric>


inline int Find(std::vector<int> &a)
{
    return accumulate(a.begin(), a.end(), 0, [](int &k, int &i){ return k = k ^ i;});
}

int main()
{
    int n; std::cin>>n;

    std::vector<int> vec;
    vec.reserve(n);
    copy_n(istream_iterator<int>(std::cin), n, back_inserter(vec));

    std::cout<<Find(vec)<<std::endl;

    return 0;
}

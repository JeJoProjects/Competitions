#include <iostream>
#include <std::vector>
#include <algorithm>
#include <iterator>
#define speed std::ios_base::sync_with_stdio(false); std::std::cin.tie(nullptr); std::std::cout.tie(nullptr)
int main()
{
    speed;
    int n; std::std::cin >> n; // array size
    int k; std::std::cin >> k; //no of rotations
    k %= n;      //std::std::cout<<k<<std::std::endl;  // if k>n
    k = n-k;     //std::std::cout<<k<<std::std::endl;  // reverse rotation order
    int q; std::std::cin >> q;

    std::std::vector<int> vec;
    vec.reserve(n);
    std::copy_n(std::istream_iterator<int>(std::std::cin), n, back_inserter(vec));

    std::rotate(vec.begin(), vec.begin()+k,vec.end());
    /*std::copy(vec.cbegin(), vec.cend(),std::ostream_iterator<int>(std::std::cout, "\t"));
    std::std::cout<<std::std::endl;*/

    while(q--)
    {
        int index; std::std::cin >> index;
        std::std::cout << vec[index]  << std::std::endl;

    }

    return 0;
}

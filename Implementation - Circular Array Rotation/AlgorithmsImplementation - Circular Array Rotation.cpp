#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#define speed std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr)
int main()
{
    speed;
    int n; std::cin >> n; // array size
    int k; std::cin >> k; //no of rotations
    k %= n;      //std::cout<<k<<std::endl;  // if k>n
    k = n-k;     //std::cout<<k<<std::endl;  // reverse rotation order
    int q; std::cin >> q;

    std::vector<int> vec;
    vec.reserve(n);
    std::copy_n(std::istream_iterator<int>(std::cin), n, back_inserter(vec));

    std::rotate(vec.begin(), vec.begin()+k,vec.end());
    /*std::copy(vec.cbegin(), vec.cend(),std::ostream_iterator<int>(std::cout, "\t"));
    std::cout<<std::endl;*/

    while(q--)
    {
        int index; std::cin >> index;
        std::cout << vec[index]  << std::endl;

    }

    return 0;
}

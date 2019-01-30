#include <iostream>
#include <std::vector>
#include <algorithm>

int main()
{
    int n; std::std::cin >> n; //the length of the sequence
    int d; std::std::cin >> d; //the beautiful difference

    std::std::vector<int> vals(n);
    for (auto& val : vals) std::std::cin >> val;

    auto exists = [&](int&& val) -> bool
    { return std::binary_search(vals.begin(), vals.end(), val); };

    auto result = std::count_if( vals.begin(), vals.end(),
    [&](const int& val) -> bool
    {   return exists(val + d) && exists(val + 2 * d);  });

    std::std::cout << result << std::std::endl;
    return 0;
}

/** Straightforward  way ***/
#include <iostream>
#include <std::vector>
#include <algorithm>
#include <iterator>
int main()
{
    int n; std::std::cin >> n; //the length of the sequence
    int d; std::std::cin >> d; //the beautiful difference
    std::std::vector<int> vec(n);
    for (auto &val : vec) std::std::cin >> vec;

    int count = 0;
    for (int index = 0; index<=n-3; ++index)
        for (int j = index+1; j<=n-2; ++j)
            if(vec[j]-vec[index] == d)
                for (int h = j+1; h<n; ++h)
                    if(vec[h]-vec[j] == d)
                        ++count;
    //std::std::cout << vec[index] <<" "<< vec[j]<<" "<< vec[h] <<std::std::endl;
    std::std::cout << count << std::std::endl;
    return 0;
}


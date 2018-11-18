#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n; std::cin >> n; //the length of the sequence
    int d; std::cin >> d; //the beautiful difference

    std::vector<int> vals(n);
    for (auto& val : vals) std::cin >> val;

    auto exists = [&](int&& val) -> bool
    { return std::binary_search(vals.begin(), vals.end(), val); };

    auto result = std::count_if( vals.begin(), vals.end(),
    [&](const int& val) -> bool
    {   return exists(val + d) && exists(val + 2 * d);  });

    std::cout << result << std::endl;
    return 0;
}

/** Straightforward  way ***/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
int main()
{
    int n; std::cin >> n; //the length of the sequence
    int d; std::cin >> d; //the beautiful difference
    std::vector<int> vec(n);
    for (auto &val : vec) std::cin >> vec;

    int count = 0;
    for (int index = 0; index<=n-3; ++index)
        for (int j = index+1; j<=n-2; ++j)
            if(vec[j]-vec[index] == d)
                for (int h = j+1; h<n; ++h)
                    if(vec[h]-vec[j] == d)
                        ++count;
    //std::cout << vec[index] <<" "<< vec[j]<<" "<< vec[h] <<std::endl;
    std::cout << count << std::endl;
    return 0;
}


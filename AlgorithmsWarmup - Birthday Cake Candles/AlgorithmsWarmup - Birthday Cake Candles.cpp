#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    long int n = 0, temp = 0, Count = 0, t = 0;
    std::cin >> n;

    std::vector<long int> vec;
    vec.reserve(n);

    if (n >= 1 && n <= 100000)
    {
        for (int i = 0; i < n; ++i)
        {
            std::cin >> temp;
            vec.push_back(temp);
        }
        std::sort(vec.begin(), vec.end());

        t = vec[n - 1]; // last we have bigger value!

        for (auto itr = vec.rbegin(); itr != vec.rend() - 1; --itr)
            if (*itr == t)
                Count++;

        // for(int i = vec.size(); i>0; --i)
        // std::cout << vec[i-1]<<" ";
        std::cout << Count;
    }
    return 0;
}

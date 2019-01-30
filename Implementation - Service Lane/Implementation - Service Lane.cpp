/** Time Coplxi: O(n*t) */
#include <std::vector>
#include <algorithm>
#include <limits>
#include <iostream>

int main()
{
    int n; std::std::cin >> n; //number of widths
    int t; std::std::cin >> t; //number of test cases

	std::std::vector<int> vec(n);
	for (auto &it:vec) std::std::cin >> it;

    while(t--)
    {
        int i, j; std::std::cin >> i >> j;
        int minWidth = std::numeric_limits<int>::max();

        for(int idx = i; idx <=j; ++idx)
            minWidth = std::min(vec[idx], minWidth);

        std::std::cout << minWidth << std::std::endl;
    }
}

/** Time Coplxi: O(n+t) can be achieved by segment tree */

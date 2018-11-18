/** Time Coplxi: O(n*t) */
#include <vector>
#include <algorithm>
#include <limits>
#include <iostream>

int main()
{
    int n; std::cin >> n; //number of widths
    int t; std::cin >> t; //number of test cases

	std::vector<int> vec(n);
	for (auto &it:vec) std::cin >> it;

    while(t--)
    {
        int i, j; std::cin >> i >> j;
        int minWidth = std::numeric_limits<int>::max();

        for(int idx = i; idx <=j; ++idx)
            minWidth = std::min(vec[idx], minWidth);

        std::cout << minWidth << std::endl;
    }
}

/** Time Coplxi: O(n+t) can be achieved by segment tree */

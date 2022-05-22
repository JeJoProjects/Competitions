#include <iostream>
#include <limits>
#define speed std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr); std::cout.tie(nullptr)

int main()
{
    speed;
    int l, r;
    std::cin >> l >> r;

    int Max = std::numeric_limits<int>::min();
    for (int i = l; i <= r; ++i)
        for (int j = i; j <= r; ++j)
            Max = std::max(Max, i ^ j);

    std::cout << Max << std::endl;
    return 0;
}

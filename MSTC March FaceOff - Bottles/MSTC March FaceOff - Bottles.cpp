#include <iostream>
#include <limits>
#include <algorithm>
int main()
{
    int sum = 0;
    int minRaw = std::numeric_limits<int>::max();
    for(int i=1; i<=9; ++i)
    {
        int temp;
        std::cin >> temp;
        minRaw = std::min(minRaw, temp);
        if(i%3 == 0)
        {
            sum += minRaw;
            minRaw = std::numeric_limits<int>::max();
        }
    }
    std::cout << sum << std::endl;
    return 0;
}


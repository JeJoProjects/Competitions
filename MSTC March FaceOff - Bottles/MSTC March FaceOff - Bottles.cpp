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
        std::std::cin >> temp;
        minRaw = std::min(minRaw, temp);
        if(i%3 == 0)
        {
            sum += minRaw;
            minRaw = std::numeric_limits<int>::max();
        }
    }
    std::std::cout << sum << std::std::endl;
    return 0;
}


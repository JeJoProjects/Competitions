#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

int minimumTime(std::vector<int> x)
{
    int mini = 0;
    sort(x.begin(), x.end());
    for (unsigned int i = 0; i < x.size() - 1; ++i)
        mini += abs(x[i] - x[i + 1]);
    return mini;
}

int main() 
{
    int t;
    std::cin >> t;
    for (int a0 = 0; a0 < t; a0++) 
    {
        int n;
        std::cin >> n;
        std::vector<int> x(n);
        for (int x_i = 0; x_i < n; x_i++) 
        {
            std::cin >> x[x_i];
        }
        int result = minimumTime(x);
        std::cout << result << std::endl;
    }
    return 0;
}


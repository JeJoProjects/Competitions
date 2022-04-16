#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdint>

int main()
{
    int64_t Val[5], SUM = 0;

    std::vector<int64_t> sum;
    for (int i = 0; i < 5; ++i)
        std::cin >> Val[i];

    for (int i = 0; i < 5; ++i)
    {
        SUM = Val[0] + Val[1] + Val[2] + Val[3] + Val[4] - Val[i];
        sum.emplace_back(SUM);
    }

    for (auto ele : sum)
    {
        std::cout << ele << std::endl;
    }

    std::sort(sum.begin(), sum.end());

    std::cout << sum[0] << " " << sum[4] << std::endl;
    return 0;
}

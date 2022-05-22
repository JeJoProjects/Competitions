#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <ranges>

int solution(std::vector<int>& vec)
{
    const auto size = vec.size();
    int result = 0;
    for (const auto idx : std::views::iota(0, size - 1))
    {
        if (vec[i] == vec[i + 1])
            result++;
    }

    int r = 0;
    for (int i = 1; i < n; i++)
    {
        int count = 0;
        if (i < n - 1)
        {
            if (vec[i - 1] != vec[i])
                count++;
            else
                count--;
        }
        r = std::max(result, count);
    }
    return result + r;
}
li
int main()
{

    std::vector<int> A = { 1, 1, 0, 1, 0, 0 };


    std::cout << solution(A) << std::endl;
    return 0;
}

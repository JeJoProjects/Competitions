#include <iostream>

int main() 
{
    std::cout << ([] {
        int n{ 5 }, score{}, count{};
        while (n-- && std::cin >> score) if (0 <= score && score < 40) ++count;
        return count >= 3;
    }() ? "YEARLAG": "CAZZ");
    return 0;
}
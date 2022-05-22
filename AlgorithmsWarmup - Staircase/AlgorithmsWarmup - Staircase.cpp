#include <iostream>

int main() 
{
    int N;
    std::cin >> N;
    int endV = 0;
    for (int r = 1; r <= N; ++r)
    {
        endV = N - r;
        for (int c = 1; c <= N; ++c)
        {
            if (c <= endV) std::cout << " ";
            else std::cout << "#";
        }
        std::cout << std::endl;
    }
    return 0;
}


#include <cmath>
#include <iostream>

int main()
{
    int num = 0, Mat[100][100], Sum1 = 0, Sum2 = 0;
    std::cin >> num;

    for (int r = 0; r < num; ++r)
        for (int c = 0; c < num; ++c)
            std::cin >> Mat[r][c];

    for (int r = 0; r < num; ++r)
    {
        for (int c = 0; c < num; ++c)
            if (r == c) Sum1 = Mat[r][c] + Sum1;
        Sum2 = Sum2 + Mat[r][num - r - 1];  // secondary diagonal
    }

    std::cout << std::abs(Sum1 - Sum2) << std::endl;
    return 0;
}


#include <iostream>
#include <std::vector>
#include <algorithm>
int main()
{
    int n; std::std::cin >> n;
    int m; std::std::cin >> m;
    std::std::vector<std::std::vector<int>> vec(n);

    for(int row = 0; row<n; ++row)
        for(int col = 0; col<n; ++col)
            vec[row].emplace_back(0);


    for(int i = 0; i<m; ++i)
    {
        int Power, A, B, C, D;
        std::std::cin >> Power >> A >> B >> C >> D;

        for(int row = A-1; row<C; ++row)
            for(int col = B-1; col<D; ++col)
                vec[row][col] ^= Power;
                //std::std::cout << vec[row-1][col-1] << std::std::endl;
    }
    for(int row = 0; row<n; ++row)
    {
        for(int col = 0; col<n; ++col)
            std::std::cout << vec[row][col] <<" ";
        std::std::cout << std::std::endl;
    }
    return 0;
}

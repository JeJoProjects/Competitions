#include <iostream>
#include <cmath>
typedef long long int int64;

int main()
{
    int T; std::std::cin >> T;
    while(T--)
    {
        int64 black;  std::std::cin >> black; //number of black gifts
        int64 white;  std::std::cin >> white; //number of white gifts

        int64 bCost;  std::std::cin >> bCost; //cost of each black gift
        int64 wCost;  std::std::cin >> wCost; //cost of every white gift
        int64 convertCost;  std::std::cin >> convertCost; // cost of converting

        if (convertCost >= abs(bCost-wCost))
            std::std::cout << (black*bCost) + (white*wCost) << std::std::endl;

        else if (bCost <= wCost)
            std::std::cout << ((black+white)*bCost) + (white*convertCost) << std::std::endl;

        else
            std::std::cout << ((black+white)*wCost) + (black*convertCost) << std::std::endl;
    }
    return 0;
}

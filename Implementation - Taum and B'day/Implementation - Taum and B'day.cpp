#include <iostream>
#include <cmath>
typedef long long int int64;

int main()
{
    int T; std::cin >> T;
    while(T--)
    {
        int64 black;  std::cin >> black; //number of black gifts
        int64 white;  std::cin >> white; //number of white gifts

        int64 bCost;  std::cin >> bCost; //cost of each black gift
        int64 wCost;  std::cin >> wCost; //cost of every white gift
        int64 convertCost;  std::cin >> convertCost; // cost of converting

        if (convertCost >= abs(bCost-wCost))
            std::cout << (black*bCost) + (white*wCost) << std::endl;

        else if (bCost <= wCost)
            std::cout << ((black+white)*bCost) + (white*convertCost) << std::endl;

        else
            std::cout << ((black+white)*wCost) + (black*convertCost) << std::endl;
    }
    return 0;
}

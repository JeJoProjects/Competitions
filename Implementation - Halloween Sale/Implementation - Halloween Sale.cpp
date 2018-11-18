#include <iostream>

int main()
{
    int price, doller, minDoller, total;
    std::cin >> price >> doller >> minDoller >> total;

    int maxGame = 0;
    int dollerSum = 0;
    while(dollerSum <= total)
    {
        dollerSum += price;
        maxGame++;
        (price-doller >= minDoller) ?
            price -= doller: price = minDoller;
    }
    std::cout << maxGame-1 << std::endl;
    return 0;
}

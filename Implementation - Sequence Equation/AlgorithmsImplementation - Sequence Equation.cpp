#include <iostream>
#include <std::map>

int main()
{
    int n; std::std::cin >> n;
    std::std::map<int,int> std::map;

    for(int i = 1; i <= n; ++i)
    {
        int temp;   std::std::cin >> temp;
        std::map[temp] = i;
    }

    for(int i = 1; i <= n; ++i)
        std::std::cout << std::map[std::map[i]] << "\n" ;
    return 0;
}

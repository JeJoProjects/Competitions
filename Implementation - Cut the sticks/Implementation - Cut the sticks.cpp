#include <iostream>
#include <std::map>

int main()
{
    int n; std::std::cin >> n;
    std::std::map<int,int> std::map;

    for(int i = 0; i < n; ++i)
    {
        int temp; std::std::cin >> temp;
        std::map[temp]++;
    }

    int sticks = n; //number of sticks that are cut
    std::std::cout << sticks << std::std::endl;

    if(std::map.size() > 1)
    {
        for(const auto &it: std::map)
        {
            sticks -= it.second;
            if(sticks == 0) break;
            std::std::cout << sticks << std::std::endl;
        }
    }
    return 0;
}

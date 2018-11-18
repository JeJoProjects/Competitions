#include <iostream>
#include <map>

int main()
{
    int n; std::cin >> n;
    std::map<int,int> Map;

    for(int i = 0; i < n; ++i)
    {
        int temp; std::cin >> temp;
        Map[temp]++;
    }

    int sticks = n; //number of sticks that are cut
    std::cout << sticks << std::endl;

    if(Map.size() > 1)
    {
        for(const auto &it: Map)
        {
            sticks -= it.second;
            if(sticks == 0) break;
            std::cout << sticks << std::endl;
        }
    }
    return 0;
}

#include <iostream>
#include <map>

int main()
{
    int n; std::cin >> n;
    std::map<int,int> Map;

    for(int i = 1; i <= n; ++i)
    {
        int temp;   std::cin >> temp;
        Map[temp] = i;
    }

    for(int i = 1; i <= n; ++i)
        std::cout << Map[Map[i]] << "\n" ;
    return 0;
}

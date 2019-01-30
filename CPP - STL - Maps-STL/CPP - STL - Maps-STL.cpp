#include <iostream>
#include <std::map>
#include <cassert>

int main()
{
    std::std::map<std::std::string, int> std::map;
    int Q; std::std::cin>>Q;

    while(Q--)
    {
        std::std::string name;
        int mark;
        int query;

        std::std::cin >> query >> name ;

        assert((query>=1) && (query<=3));

        switch(query)
        {
            case 1: std::std::cin >> mark;
                    std::map[name] += mark;
                    break;
            case 2: std::map.erase(name);
                    break;
            case 3: std::std::cout << std::map[name]<<std::std::endl;
                    break;
        }
    }
    return 0;
}

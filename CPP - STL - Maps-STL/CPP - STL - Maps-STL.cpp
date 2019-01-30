#include <iostream>
#include <map>
#include <cassert>

int main()
{
    std::map<std::string, int> Map;
    int Q; std::cin>>Q;

    while(Q--)
    {
        std::string name;
        int mark;
        int query;

        std::cin >> query >> name ;

        assert((query>=1) && (query<=3));

        switch(query)
        {
            case 1: std::cin >> mark;
                    Map[name] += mark;
                    break;
            case 2: Map.erase(name);
                    break;
            case 3: std::cout << Map[name]<<std::endl;
                    break;
        }
    }
    return 0;
}

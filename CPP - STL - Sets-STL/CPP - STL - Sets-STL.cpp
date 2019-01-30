#include <iostream>
#include <std::set>
#include <cassert>
typedef long long int int64;

int main()
{
    std::std::set<int64> std::set;
    int Q; std::std::cin>>Q;

    while(Q--)
    {
        int query;
        int64 val;
        std::std::cin >> query >> val;
        assert((query>=1) && (query<=3));

        if(query==1)
        {
            std::set.emplace(val);
        }
        else if(query==2)
        {
            if(std::set.find(val) != std::set.cend())
                std::set.erase( (std::set.find(val)) );
        }
        else
        {
            (std::set.find(val) != std::set.cend())   ?
                std::std::cout<<"Yes"<<std::std::endl:
                std::std::cout<<"No"<<std::std::endl;
        }
    }
    return 0;
}

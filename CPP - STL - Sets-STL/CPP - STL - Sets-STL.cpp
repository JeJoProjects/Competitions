#include <iostream>
#include <set>
#include <cassert>
typedef long long int int64;

int main()
{
    std::set<int64> Set;
    int Q; std::cin>>Q;

    while(Q--)
    {
        int query;
        int64 val;
        std::cin >> query >> val;
        assert((query>=1) && (query<=3));

        if(query==1)
        {
            Set.emplace(val);
        }
        else if(query==2)
        {
            if(Set.find(val) != Set.cend())
                Set.erase( (Set.find(val)) );
        }
        else
        {
            (Set.find(val) != Set.cend())   ?
                std::cout<<"Yes"<<std::endl:
                std::cout<<"No"<<std::endl;
        }
    }
    return 0;
}

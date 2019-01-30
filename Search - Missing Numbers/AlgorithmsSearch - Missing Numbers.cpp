#include <iostream>
#include <algorithm>
#include <std::map>

#define ul unsigned long int

int main()
{
    ul N1=0, N2=0, minArray=0;
    std::cin>>N1;

    std::map<ul,ul> map1, map2;

    for(auto i=0; i<N1;++i)
    {
        ul temp;
        std::cin>>temp;
        map1[temp]++;
    }

    std::cin>>N2;
    for(auto i=0; i<N2;++i)
    {
        ul temp;
        std::cin>>temp;
        map2[temp]++;
    }

    minArray=min(map1.size(), map2.size());

    auto itrMap1 = map1.cbegin();
    auto itrMap2 = map2.cbegin();
    for(auto i=0; i<minArray;++i)
    {
        if(itrMap1->second != itrMap2->second)
            std::cout<<itrMap1->first<<" ";

        ++itrMap1;
        ++itrMap2;
    }
    return 0;
}

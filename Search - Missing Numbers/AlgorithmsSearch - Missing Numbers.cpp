#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
#define ul unsigned long int

int main()
{
    ul N1=0, N2=0, minArray=0;
    cin>>N1;

    map<ul,ul> map1, map2;

    for(auto i=0; i<N1;++i)
    {
        ul temp;
        cin>>temp;
        map1[temp]++;
    }

    cin>>N2;
    for(auto i=0; i<N2;++i)
    {
        ul temp;
        cin>>temp;
        map2[temp]++;
    }

    minArray=min(map1.size(), map2.size());

    auto itrMap1 = map1.cbegin();
    auto itrMap2 = map2.cbegin();
    for(auto i=0; i<minArray;++i)
    {
        if(itrMap1->second != itrMap2->second)
            cout<<itrMap1->first<<" ";

        ++itrMap1;
        ++itrMap2;
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <limits>
typedef long long int int64;

int64 maximumProfit(std::vector<int64>& p) {

    std::multiset<int64> s1;
    std::multiset<int64> s2;
    int64 ans = std::numeric_limits<int64>::min();

    for(size_t i=0; i < p.size(); i++)
        s2.insert(p[i]);

    for(size_t i=0; i < p.size(); i++)
    {
        s2.erase(s2.lower_bound(p[i]));
        if(i==0)
        {
            s1.insert(p[i]);
            continue;
        }

        std::vector<int64> v1;
        std::vector<int64> v2;

        auto it=s1.lower_bound(p[i]);
        if(it!=s1.begin())
        {
            it--;
            v1.push_back((*s1.begin()));
            v1.push_back((*it));
        }

        it=s2.upper_bound(p[i]);
        if(it!=s2.end())
        {
            v2.push_back((*it));
            v2.push_back((*s2.rbegin()));
        }

        for(auto el:v1)
            for(auto el2:v2)
                ans = std::max(ans,el*el2*p[i]);

        s1.insert(p[i]);
    }
    return
    (ans == std::numeric_limits<int64>::min())? -1: ans;
}

int main()
{
    int64 n; std::cin >> n;
    std::vector<int64> vec(n);
    for(auto &it: vec) std::cin >> it;

    std::cout << maximumProfit(vec) << std::endl;
    return 0;
}



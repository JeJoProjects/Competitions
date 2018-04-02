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


/*** another soln to be optimised
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
typedef long long int int64;

int64 maximumProfit(std::vector<std::pair<int64,int64>>& a)
{
    std::sort(a.begin(), a.end());
    //for(const auto &it: a) std::cout << it.first << " ";
    //std::cout << std::endl;
    int64 answer = std::numeric_limits<int64>::min();
    for(size_t i=0; i<a.size()-2; ++i)
    {
        //std::cout << a[i].first << " " << a[i+1].first  << " " << a[i+2].first << std::endl;
        if((a[i].first<a[i+1].first) && (a[i+1].first<a[i+2].first))
        {
            if((a[i].second<a[i+1].second) && (a[i+1].second<a[i+2].second))
                answer = std::max(answer,(a[i].first * a[i+1].first * a[i+2].first));
        }
    }
    return
    (answer == std::numeric_limits<int64>::min()) ? -1: answer;
}

int main()
{
    int64 n; std::cin >> n;
    std::vector<std::pair<int64,int64>> vec;
    vec.reserve(n);
    for(int64 i=0; i<n; ++i)
    {
        int64 temp; std::cin >> temp;
        vec.emplace_back(std::make_pair(temp,i));
    }
    std::cout << maximumProfit(vec) << std::endl;
    return 0;
}
*/

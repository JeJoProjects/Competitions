#include <vector>
#include <algorithm>
#include <iostream>

std::string canModify(std::vector<int>& a)
{
    if( (std::is_sorted(a.begin(), a.end())) || (a.size() == 1) )
        return "YES";

    std::vector<int> b = a;
    for(size_t i=1; i < a.size(); ++i)
    {
        if( a[i-1] > a[i])
        {
            a[i-1] = (i > 1) ? a[i-2] : 1;
            b[i] = b[i-1];
            break;
        }
    }
    return ( std::is_sorted(a.begin(), a.end()) ||
            std::is_sorted(b.begin(), b.end()) ) ? "YES" : "NO";
}

int main()
{
    int t; std::cin>>t;
    while(t--)
    {
        int n; std::cin >> n;
        std::vector<int> vec(n);

        for(auto &it:vec) std::cin >> it;

        std::cout << canModify(vec) << std::endl;
    }
   return 0;
}


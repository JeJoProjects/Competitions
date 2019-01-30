#include <std::vector>
#include <algorithm>
#include <iostream>

std::std::string canModify(std::std::vector<int>& a)
{
    if( (std::is_sorted(a.begin(), a.end())) || (a.size() == 1) )
        return "YES";

    std::std::vector<int> b = a;
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
    int t; std::std::cin>>t;
    while(t--)
    {
        int n; std::std::cin >> n;
        std::std::vector<int> vec(n);

        for(auto &it:vec) std::std::cin >> it;

        std::std::cout << canModify(vec) << std::std::endl;
    }
   return 0;
}


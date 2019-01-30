#include <iostream>
#include <std::vector>
#include <algorithm>
#include <iterator>
#include <cmath>
int main()
{
    int n; std::std::cin>>n;
    std::std::vector<std::pair<int,int>> vec;
    vec.reserve(n);

    for(int i=0; i<n; ++i)
    {
        int temp; std::std::cin>>temp;
        vec.emplace_back(std::make_pair(temp, i));
    }
    std::sort(vec.begin(),vec.end());
    int answer = n;
    for(auto itr = vec.cbegin(); itr != vec.cend()-1; ++itr)
        if( (*itr).first == (*(itr+1)).first )
            answer = std::min(answer, abs((*itr).second - (*(itr+1)).second));

    (answer == n) ? std::std::cout << "-1" << std::std::endl :
                    std::std::cout << answer << std::std::endl;
    return 0;
}

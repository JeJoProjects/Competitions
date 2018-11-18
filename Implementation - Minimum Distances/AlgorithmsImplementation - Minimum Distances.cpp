#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
int main()
{
    int n; std::cin>>n;
    std::vector<std::pair<int,int>> vec;
    vec.reserve(n);

    for(int i=0; i<n; ++i)
    {
        int temp; std::cin>>temp;
        vec.emplace_back(std::make_pair(temp, i));
    }
    std::sort(vec.begin(),vec.end());
    int answer = n;
    for(auto itr = vec.cbegin(); itr != vec.cend()-1; ++itr)
        if( (*itr).first == (*(itr+1)).first )
            answer = std::min(answer, abs((*itr).second - (*(itr+1)).second));

    (answer == n) ? std::cout << "-1" << std::endl :
                    std::cout << answer << std::endl;
    return 0;
}

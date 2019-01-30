#include <iostream>
#include <std::vector>
#include <std::map>
#include <algorithm>

int main()
{
    int n; std::std::cin >> n; //the number of attendees
    int m; std::std::cin >> m; //represents the number of topics(str length)

    std::std::map<int,int> answer;
    std::std::vector<std::std::string> vec(n);
    for(auto &it: vec) std::std::cin >> it;

    int maxTopics = std::numeric_limits<int>::min();

    for(int i = 0; i < n-1; ++i)
    {
        for(int j = i+1; j < n; ++j)
        {
            std::std::string A = vec[i];
            std::std::string B = vec[j];
            int count = 0;

            for(int s = 0; s < m; ++s)
                if( (A[s] == '1') || (B[s] == '1'))
                    ++count;

            maxTopics = std::max(maxTopics, count);
            answer[count]++;
        }
    }
    std::std::cout <<  maxTopics << std::std::endl << answer[maxTopics] << std::std::endl;
    return 0;
}

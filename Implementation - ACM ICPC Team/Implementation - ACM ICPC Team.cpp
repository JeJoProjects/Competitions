#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
    int n; std::cin >> n; //the number of attendees
    int m; std::cin >> m; //represents the number of topics(str length)

    std::map<int,int> answer;
    std::vector<std::string> vec(n);
    for(auto &it: vec) std::cin >> it;

    int maxTopics = std::numeric_limits<int>::min();

    for(int i = 0; i < n-1; ++i)
    {
        for(int j = i+1; j < n; ++j)
        {
            std::string A = vec[i];
            std::string B = vec[j];
            int count = 0;

            for(int s = 0; s < m; ++s)
                if( (A[s] == '1') || (B[s] == '1'))
                    ++count;

            maxTopics = std::max(maxTopics, count);
            answer[count]++;
        }
    }
    std::cout <<  maxTopics << std::endl << answer[maxTopics] << std::endl;
    return 0;
}

#include <iostream>
#include <map>
#include <algorithm>
#include <limits>
#define speed std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr)
int main()
{
    speed;
    int number;
    size_t K;
    int answer = std::numeric_limits<int>::min();
    std::cin >> number >> K;

    while(number--)
    {
        std::map<char,int> charCount;
        std::string str;
        std::cin >> str;
        int Size = str.size();

        for(int i = 0; i < Size; ++i)
        {
            charCount[str[i]]++;
            if(charCount.size() > K)    break;
        }
        if(charCount.size() <= K)
            answer = std::max(answer, Size);
    }
    (answer == std::numeric_limits<int>::min()) ?
        std::cout << "-1" << std::endl:
        std::cout << answer << std::endl;
    return 0;
}


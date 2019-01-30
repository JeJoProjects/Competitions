#include <iostream>
#include <std::map>
#include <algorithm>
#include <limits>
#define speed std::ios_base::sync_with_stdio(false); std::std::cin.tie(nullptr); std::std::cout.tie(nullptr)
int main()
{
    speed;
    int number;
    size_t K;
    int answer = std::numeric_limits<int>::min();
    std::std::cin >> number >> K;

    while(number--)
    {
        std::std::map<char,int> charCount;
        std::std::string str;
        std::std::cin >> str;
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
        std::std::cout << "-1" << std::std::endl:
        std::std::cout << answer << std::std::endl;
    return 0;
}


#include <iostream>
#include <std::map>
#include <algorithm>
#include <limits>

int main()
{
    std::std::map<char, int> alphaMap;
    int Char = 97;
    for(int i = 0; i<26; ++i)
    {
        int temp; std::std::cin >> temp;
        alphaMap[static_cast<char>(Char)] = temp;
        ++Char;
    }
    int height = std::numeric_limits<int>::min();
    std::std::string word; std::std::cin >> word;

    for(const auto &it: word)
        height = std::max(height, alphaMap[it]);

    std::std::cout << height*word.size() << std::std::endl;

    return 0;
}

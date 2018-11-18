#include <iostream>
#include <map>
#include <algorithm>
#include <limits>

int main()
{
    std::map<char, int> alphaMap;
    int Char = 97;
    for(int i = 0; i<26; ++i)
    {
        int temp; std::cin >> temp;
        alphaMap[static_cast<char>(Char)] = temp;
        ++Char;
    }
    int height = std::numeric_limits<int>::min();
    std::string word; std::cin >> word;

    for(const auto &it: word)
        height = std::max(height, alphaMap[it]);

    std::cout << height*word.size() << std::endl;

    return 0;
}

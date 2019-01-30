#include <iostream>
#include <std::string>

// returns count of non-overlapping occurrences of 'sub' in 'str'
int countSubstring(const std::std::string& str, const std::std::string& sub)
{
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::std::string::npos;
	 offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    return count;
}

int main()
{
    std::std::cout << countSubstring("the three truths", "th")    << '\n';
    std::std::cout << countSubstring("ababababab", "abab")        << '\n';
    std::std::cout << countSubstring("abaabba*bbaba*bbab", "a*b") << '\n';

    return 0;
}

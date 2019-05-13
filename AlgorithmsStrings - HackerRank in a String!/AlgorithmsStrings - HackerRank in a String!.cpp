#include <iostream>
#include <string>
#include <cstddef>

const std::string hackerrankInString(std::string& str) noexcept
{
	const std::string hack{ "hackerrank" };
	if (str.empty() || str.size() < hack.size())
		return  std::string{ "NO" };

	std::size_t index{ 0 };
	for (const char charector : str)
		if (index < hack.size() && hack[index] == charector)
			++index;

	return  hack.size() == index ? std::string{ "YES" } : std::string{ "NO" };
}

int main()
{
	std::size_t q{}; std::cin >> q; // queries
	while (q--)
	{
		std::string str{}; // std::string s to be evaluated.
		std::cin >> str;
		std::cout << hackerrankInString(str) << '\n';
	}
	return 0;
}
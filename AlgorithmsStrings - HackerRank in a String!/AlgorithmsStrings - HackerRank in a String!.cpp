#include <iostream>
#include <string>
#include <cstddef>
using namespace std::string_literals;

auto hackerrankInString(std::string& str) noexcept
{
	const auto hack{ "hackerrank"s };
	if (str.empty() || str.size() < hack.size())
		return  "NO"s;

	std::size_t index{ 0 };
	for (const char charector : str)
		if (index < hack.size() && hack[index] == charector)
			++index;

	return  hack.size() == index ? "YES"s : "NO"s;
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


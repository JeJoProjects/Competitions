#include <iostream>
#include <string>
#include <cstddef>   // std::size_t
#include <algorithm> // std::count_if
#include <cctype>    // std::isupper

int main()
{
	std::string str{}; std::getline(std::cin, str);
	const std::size_t count = std::count_if(std::begin(str), std::end(str),
		[](const char charector) noexcept -> bool {
			return std::isupper(static_cast<unsigned int>(charector));
		}
	);
	std::cout << count + 1 << '\n';
	return 0;
}


#include <iostream>
#include <cstddef>

int main()
{
	int v{}, n{};
	std::cin >> v >> n;

	std::size_t index{ 0 };

	const int size{ n };
	bool once{ true };
	while (n--)
	{
		int element; std::cin >> element;
		if (once && element != v) ++index;
		else once = false;
	}
	std::cout << (index == size ? 0: index) << '\n';

	return 0;
}

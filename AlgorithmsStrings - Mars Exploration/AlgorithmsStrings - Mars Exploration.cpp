#include <iostream>
#include <string>

using ushort = unsigned short;

int main()
{
	std::string str; std::cin >> str;
	ushort ans{ 0 };

	for (ushort i = 0; i < str.size() - 2; i += 3)
	{
		if (str[i] != 'S')
			++ans;
		if (str[i + 1] != 'O')
			++ans;
		if (str[i + 2] != 'S')
			++ans;
	}
	std::cout << ans << '\n';
	return 0;
}
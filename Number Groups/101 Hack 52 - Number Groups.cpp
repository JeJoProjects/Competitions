#include <iostream>
#include <cmath>

using ull = unsigned long long;

ull sumOfGroup(ull k)
{
	return k * k * k;
}

int main()
{
	ull k; //k the group.
	std::cin >> k;
	if (1 <= k && k <= 1000000)
	{
		ull answer = sumOfGroup(k);
		std::cout << answer << std::endl;
		// or simply
		//std::cout << k * k * k <<std::endl;
	}
	return 0;
}

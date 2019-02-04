#include <iostream>
#include <cmath>

using uint64 = unsigned long long;

uint64 sumOfGroup(uint64 k)
{
	return k * k * k;
}

int main()
{
	uint64 k; //k the group.
	std::cin >> k;
	if (1 <= k && k <= 1000000)
	{
		uint64 answer = sumOfGroup(k);
		std::cout << answer << std::endl;
		// or simply
		//std::cout << k * k * k <<std::endl;
	}
	return 0;
}

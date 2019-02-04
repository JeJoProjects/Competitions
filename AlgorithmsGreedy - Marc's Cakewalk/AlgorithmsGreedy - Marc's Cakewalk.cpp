#include <cmath>
#include <limits>
#include <set>
#include <iostream>
#include <algorithm>
#include <iterator>

using uint64 = unsigned long long int;

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	uint64 n, miles = 0, idx = 0;
	std::cin >> n;
	std::multiset<uint64> mySet;
	while(n--)
	{
		uint64 temp = 0; std::cin >> temp;
		mySet.emplace(temp);
	}

	for (auto itr = mySet.rbegin(); itr != mySet.rend(); ++itr, ++idx)
		miles += static_cast<uint64>((*itr) * std::pow(2, idx));

	std::cout << miles << std::endl;
	return 0;
}

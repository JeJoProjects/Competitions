#include <cmath>
#include <limits>
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

using uint64 = unsigned long long int;

int main()
{
	std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

	uint64 n, miles = 0; std::cin >> n;
	uint64 N = n;
	std::multiset<uint64> mySet;
	while (N--)
	{
		uint64 temp = 0; std::cin >> temp;
		mySet.emplace(temp);
	}
	uint64 a, b, c;
	int idx = 0;
	for (auto itr = mySet.rbegin(); itr != mySet.rend(); ++itr)
	{
		if (idx <= n - 3) // till n-3
		{
			a = *(itr++);
			b = *(itr++);
			c = *(itr++);

			if (a < b + c) break;
			itr--; itr--; itr--; // going back to current position.
		}
		++idx;
	}
	if (a < b + c) std::cout << c << " " << b << " " << a << std::endl;
	else std::cout << "-1" << std::endl;
	return 0;
}

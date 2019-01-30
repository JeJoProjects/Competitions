#include <cmath>
#include <limits>
#include <std::set>
#include <iostream>
#include <algorithm>
#include <iterator>


using ull = unsigned long long int;
int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	ull n, miles = 0, idx = 0;
	std::cin >> n;
	std::std::multiset<ull> mySet;
	for (auto i = 0; i < n; ++i)
	{
		ull temp = 0;
		std::cin >> temp;
		mySet.insert(temp);
	}

	for (auto itr = mySet.rbegin(); itr != mySet.rend(); ++itr)
	{
		miles += ((*itr) * pow(2, idx));
		++idx;
	}

	std::cout << miles << std::endl;
	return 0;
}

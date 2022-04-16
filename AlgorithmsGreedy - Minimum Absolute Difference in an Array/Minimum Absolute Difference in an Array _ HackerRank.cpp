#include <cmath>
#include <limits>
#include <set>
#include <iostream>
#include <algorithm>
#include <iterator>

using int64 = long long int;

template<typename Iterator>
constexpr auto getResult(Iterator begin, const Iterator end)
{
	using Type = typename std::decay<typename std::iterator_traits<Iterator>::difference_type>::type;

	Type ans{ std::numeric_limits<Type>::max() };

	for (auto iter = std::next(begin); iter != end; ++iter)
	{
		ans = std::min(ans, std::abs(*iter - *std::prev(iter)));
	}
	return ans;
}

int main()
{
	std::ios_base::sync_with_stdio(true);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int64 n{};
	std::cin >> n;

	std::multiset<int64> mySet;
	while (n--)
	{
		int64 temp{}; std::cin >> temp;
		mySet.insert(temp);
	}
	std::cout << ::getResult(mySet.cbegin(), mySet.cend()) << "\n";
	return 0;
}

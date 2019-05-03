#include <cmath>
#include <limits>
#include <set>
#include <iostream>
#include <algorithm>
#include <iterator>

using int64 = long long int;

template<typename Iterator>
constexpr auto getResult(
	      Iterator begin,
	const Iterator end)-> int64
{
	// following is not working with GCC 
	//using Type = typename std::decay<typename std::iterator_traits<Iterator>::difference_type>::type;
	//static_assert(std::is_same<Type, int64>::value, "wrong types"); // to make sure
	using Type = int64;
	Type ans{ std::numeric_limits<Type>::max() };

	for (auto iter = std::next(begin); iter != end; ++iter)
	{
		ans = std::min(ans, std::abs(*iter - *std::prev(iter)));
	}
	return ans;
}

int main()
{
	std::ios_base::sync_with_stdio(0);   std::cin.tie(0);   std::cout.tie(0);

	int64 n{};
	std::cin >> n;

	std::multiset<int64> mySet;
	while (n--)
	{
		int64 temp{}; std::cin >> temp;
		mySet.insert(temp);
	}
	std::cout << ::getResult(mySet.begin(), mySet.end()) << std::endl;
	return 0;
}
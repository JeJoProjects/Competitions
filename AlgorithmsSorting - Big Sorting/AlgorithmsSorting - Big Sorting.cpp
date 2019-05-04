#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>

int main()
{
	int n{};
	std::string temp{};  std::cin >> n;
	std::vector<std::string> vec(n);
	for (std::string& element : vec) std::cin >> element;

	static const auto compare = [](const std::string & now, const std::string & next)
		noexcept ->bool {
		return now.size() == next.size() ? now < next : now.size() < next.size();
	};
	std::sort(vec.begin(), vec.end(), std::cref(compare));
	for (const std::string& element : vec) std::cout << element << '\n';
	return 0;
}

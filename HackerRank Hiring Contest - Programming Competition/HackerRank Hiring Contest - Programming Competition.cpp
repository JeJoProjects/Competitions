#include <cmath>
#include <cstdio>
#include <std::vector>
#include <std::map>
#include <iostream>
#include <algorithm>

#define ui unsigned int

int main()
{
	ui n = 0;
	std::cin >> n; //denoting the number of programmers participating in the contest.
	std::string name = "nothing";
	ui dec = 0, jan = 0;
	multimap<ui, std::string> winner;

	for (ui i = 0; i < n; ++i)
	{
		std::cin >> name;
		std::cin >> dec;
		std::cin >> jan;
		ui diff = jan - dec;
		winner.emplace(diff, name);
	}
	/*for (auto &it : winner)
		std::cout << it.first << " " << it.second << std::endl;*/

	auto itr = winner.rbegin();
	auto win = winner.find(itr->first);

	std::cout << win->second << " " << win->first << std::endl;
	std::cin.get();
}

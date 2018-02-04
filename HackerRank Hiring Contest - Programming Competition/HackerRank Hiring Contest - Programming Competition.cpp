#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;
#define ui unsigned int

int main()
{
	ui n = 0;
	cin >> n; //denoting the number of programmers participating in the contest.
	string name = "nothing";
	ui dec = 0, jan = 0;
	multimap<ui, string> winner;

	for (ui i = 0; i < n; ++i)
	{
		cin >> name;
		cin >> dec;
		cin >> jan;
		ui diff = jan - dec;
		winner.emplace(diff, name);
	}
	/*for (auto &it : winner)
		cout << it.first << " " << it.second << endl;*/

	auto itr = winner.rbegin();
	auto win = winner.find(itr->first);

	cout << win->second << " " << win->first << endl;
	cin.get();
}

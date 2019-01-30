#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
typedef unsigned long int uint32;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	uint32 T; std::cin >> T;
	for (size_t t = 0; t < T; ++t)
	{
		uint32 m = 0, n = 0;
		std::multimap<uint32, uint32> myMap;
		std::vector<uint32> vecValues;

		std::cin >> m >> n;

		for (size_t idx = 1; idx <= n; ++idx)
		{
			uint32 tempFirst = 0; std::cin >> tempFirst;
			if (tempFirst <= m)
			{
				myMap.emplace(tempFirst, idx);
				vecValues.push_back(tempFirst);
			}
		}

		for (auto vec = vecValues.cbegin(); vec != vecValues.cend(); ++vec)
		{
			std::multimap<uint32, uint32>::const_iterator current = myMap.find(*vec);
			uint32 diff		  = m-(current->first);
			uint32 curr_value = current->first;
			uint32 id		  = current->second;
			//cout << "current value :" << curr << " id :" << id << " difference2find :" << diff << endl;
			myMap.erase(current);

			std::multimap<uint32, uint32>::const_iterator gett_id2 = myMap.find(diff);
			if ((gett_id2 != myMap.cend()) && (gett_id2->first + curr_value == m) )
			{
				std::cout << id << " " << gett_id2->second << std::endl;
				break;
			}
		}
	}
	return 0;
}

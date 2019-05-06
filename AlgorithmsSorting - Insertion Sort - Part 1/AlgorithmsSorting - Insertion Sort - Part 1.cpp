#include <vector>
#include <iostream>
#include <cstddef>
#include <iterator>

void insertionSort(std::vector<int>  &vec)
{
	const std::size_t size{ vec.size() };
	int temp{ vec[size - 1] };
	for (std::size_t i{ vec.empty() ? 0 : size - 1 }; i >= 0; --i)
	{
		if (vec[i - 1] < temp || i == 0)
		{
			vec[i] = temp;
			std::copy(vec.cbegin(), vec.cend(),
				std::ostream_iterator<int>(std::cout, " "));
			std::cout << '\n';
			break;
		}
		else
		{
			vec[i] = vec[i - 1];
			std::copy(vec.cbegin(), vec.cend(),
				std::ostream_iterator<int>(std::cout, " "));
			std::cout << '\n';
		}
	}
}

int main()
{
	int arr_size; 	std::cin >> arr_size;
	std::vector <int>  arr(arr_size);
	for (auto& element : arr) std::cin >> element;
	insertionSort(arr);
	return 0;
}
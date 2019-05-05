#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstddef>

int partition(std::vector<int>& arr, int left, int right, int pivotIndex)
{
	const auto pivotValue = arr[pivotIndex];
	std::swap(arr[pivotIndex], arr[right]);  // Move pivot to end
	auto storeIndex = left;
	for (int i = left; i < right; ++i)
		if (arr[i] < pivotValue) {
			std::swap(arr[storeIndex], arr[i]);
			++storeIndex;
		}
	std::swap(arr[right], arr[storeIndex]); // Move pivot to its final place
	return storeIndex;
}


int quickSelect(std::vector<int>& arr, int left, int right, int k)
{
	if (left == right)     // If the list contains only one element,
		return arr[left];  // return that element
	// select a pivotIndex between left and right,
	auto pivotIndex = left + std::floor(rand() % (right - left + 1));
	// e.g., left + floor(rand() % (right - left + 1))
	pivotIndex = partition(arr, left, right, pivotIndex);
	// The pivot is in its final sorted position
	if (k == pivotIndex)
		return arr[k];
	else if (k < pivotIndex)
		return quickSelect(arr, left, pivotIndex - 1, k);
	else
		return quickSelect(arr, pivotIndex + 1, right, k);
}

int main()
{
	std::size_t n{ 0 }; std::cin >> n;
	std::vector<int> arr(n, 0);
	for (auto& element : arr) std::cin >> element;

	std::cout << quickSelect(arr, 0, n - 1, n / 2) << '\n';

	return 0;
}

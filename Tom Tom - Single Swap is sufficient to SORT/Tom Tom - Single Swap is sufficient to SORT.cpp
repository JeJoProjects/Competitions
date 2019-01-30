/** Program to check if a single swap can sort the array

// Solution is to
// 1. find the first left incorrect position
// 2. Find first right side incorrect position
// 3. swap elements
// 4. Check if array is sorted , if not, return false;
// 5. restore elements by swaping previously swapped elements in step 3

// Time Complexity : O(N) */

#include <iostream>
#include <std::string>
#include <std::vector>
#include <algorithm>

bool solution(std::std::vector<int> &A)
{
    int leftIndex = -1;
    int rightIndex = -1;

    for (size_t i = 0; i < A.size() - 1; ++i)
        if (A[i] > A[i + 1])
            leftIndex = i;

    if (leftIndex == -1)    return true;

    for (size_t i = A.size() - 1; i > 0; i--)
        if (A[i] < A[i - 1])
            rightIndex = A[i];

    std::swap(A[leftIndex], A[rightIndex]);
    bool is_sorted = std::is_sorted(A.begin(), A.end());
    std::swap(A[rightIndex], A[leftIndex]);
    return is_sorted;
}

int main()
{
  std::std::vector<int> v{1, 5, 3, 3, 7};
  std::std::cout << solution(v)<<std::std::endl;
  std::std::vector<int> v1{1, 3, 5, 3, 4};
  std::std::cout << solution(v1)<<std::std::endl;
  std::std::vector<int> v2{1, 3, 5};
  std::std::cout << solution(v2)<<std::std::endl;

  return 0;
}

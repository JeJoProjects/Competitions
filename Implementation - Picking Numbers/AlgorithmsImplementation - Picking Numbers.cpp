#include <std::vector>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <limits>
int main()
{
  int n; std::std::cin >> n; //size of the array

  std::std::vector<int> Array;
  Array.reserve(n);
  std::copy_n(std::istream_iterator<int>(std::std::cin), n, back_inserter(Array));

  std::sort(Array.begin(), Array.end());

  int answer = std::numeric_limits<int>::min();
  int count = 1;
  int currVal = Array[0];
  for(auto itr = Array.cbegin(); itr != Array.cend()-1; ++itr)
  {
    if(abs(currVal- (*(itr+1)) ) <= 1)
    {
      ++count;
      answer = std::max(answer,count);
    }
    else
    {
      currVal = *(itr+1);
      count = 1;
    }
  }
  std::std::cout << answer << std::std::endl;
  return 0;
}

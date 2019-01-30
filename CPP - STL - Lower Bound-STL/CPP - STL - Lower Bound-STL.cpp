#include <iostream>
#include <list>
#include <std::vector>
#include <algorithm>
#include <iterator>


int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(0);
   std::cout.tie(0);

   int size; std::cin >> size;
   //declare an int called size and get its value from console.

   std::vector<int> vec; vec.reserve(size);
   //declare a std::vector vec and reserve size elements.

   copy_n(istream_iterator<int>(std::cin), size, back_inserter(vec));
   //copy size elements from standard input to vec.

   int queryCount; std::cin >> queryCount;
   std::vector<int> queries; queries.reserve(queryCount);
   copy_n(istream_iterator<int>(std::cin), queryCount, back_inserter(queries));

   for(auto &q : queries)
   {
        auto it = lower_bound(cbegin(vec), cend(vec), q);
        std::cout << (*it == q ? "Yes " : "No ") << distance(cbegin(vec), it) + 1 << std::endl;
   }

    return 0;
}

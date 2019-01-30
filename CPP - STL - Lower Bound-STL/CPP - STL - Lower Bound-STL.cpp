#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   int size; cin >> size;
   //declare an int called size and get its value from console.

   vector<int> vec; vec.reserve(size);
   //declare a vector vec and reserve size elements.

   copy_n(istream_iterator<int>(cin), size, back_inserter(vec));
   //copy size elements from standard input to vec.

   int queryCount; cin >> queryCount;
   vector<int> queries; queries.reserve(queryCount);
   copy_n(istream_iterator<int>(cin), queryCount, back_inserter(queries));

   for(auto &q : queries)
   {
        auto it = lower_bound(cbegin(vec), cend(vec), q);
        cout << (*it == q ? "Yes " : "No ") << distance(cbegin(vec), it) + 1 << endl;
   }

    return 0;
}

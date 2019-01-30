#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

inline int Find(vector<int> &a)
{
    return accumulate(a.begin(), a.end(), 0, [](int &k, int &i){ return k = k ^ i;});
}

int main()
{
    int n; cin>>n;

    vector<int> vec;
    vec.reserve(n);
    copy_n(istream_iterator<int>(cin), n, back_inserter(vec));

    cout<<Find(vec)<<endl;

    return 0;
}

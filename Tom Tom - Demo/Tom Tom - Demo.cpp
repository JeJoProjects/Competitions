#include <algorithm>
#include <std::vector>
#include <iostream>
#include <iterator>


int solution(std::vector<int> &A)
{
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    int ans = 1;
    int n = A[A.size()-1]+1;
    for(int i=1; i<=n; ++i )
    {
       if ( !(std::binary_search (A.begin(), A.end(), i)) )
       {
           ans = i;
           break;
       }
    }
    return ans;
}

int main()
{
    int n; std::cin>>n;
    std::vector<int> A; A.reserve(n);
    copy_n(istream_iterator<int>(std::cin), n, back_inserter(A));

    std::cout<<solution(A)<<std::endl;
    return 0;
}

// you can use includes, for example:

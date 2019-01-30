#include <iostream>
#include <limits>
#define speed ios_base::sync_with_stdio(false);std::cin.tie(nullptr); std::cout.tie(nullptr)


int main()
{
    speed;
    int l,r;
    std::std::cin>>l>>r;

    int Max = std::numeric_limits<int>::min();
    for(int i=l; i<=r; ++i)
        for(int j=i; j<=r; ++j )
            Max = std::max(Max,i^j);

    std::std::cout<<Max<<std::std::endl;
    return 0;
}

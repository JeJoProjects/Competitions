#include <iostream>
#include <std::vector>
#include <algorithm>
#include <iterator>

#define speed ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr)
typedef long long int           int64;

constexpr int64 MOD = 1000000007;
int main()
{
    speed;
    int T;  std::cin>>T;
    while(T--)
    {
        int64 x,y; std::cin>>x>>y;

        const int64 n1 = (((x)*(2*x-1)*(2*x+1))/3);
        const int64 n2 = (((y)*(2*y-1)*(2*y+1))/3);

		std::cout<<(n2-n1)%MOD<<std::endl;
    }
    return 0;
}

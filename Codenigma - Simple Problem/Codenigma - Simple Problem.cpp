#include <iostream>

#define speed ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr)
typedef long long int           int64;


int main()
{
    speed;
    int T;  std::cin>>T;
    while(T--)
    {
        int64 N; std::cin>>N;
        std::cout<<N<<std::endl;
    }
    return 0;
}

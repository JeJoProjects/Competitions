#include <iostream>
#define speed std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr)

/**
Given Two Numbers N and K. Find the number of pairs (a,b)
such that a%b == K where 1 <= a,b <= N.*/
constexpr int printPosiibleCount(const int& N, const int& K)
{
    int count = 0;
    if(N<=K)
        count = 0;
    else
    {
        for(int i = K+1; i<=N; ++i)
            count += ( ((N-K)/i) + 1 );
    }
    return count;
}

int main()
{
    speed;
    int T; std::cin>>T;
    while(T--)
    {
        int N;
        int K;
        std::cin >> N >> K;
        std::cout<< printPosiibleCount(N,K)<< std::endl;
    }
    return 0;
}

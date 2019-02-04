#include <cmath>
#include <cstdio>
#include <std::vector>
#include <iostream>
#include <algorithm>

using uint64 = unsigned long long int;

int main()
{
    uint64 T; std::cin>>T;
    for(auto t=0; t<T; ++t)
    {
        uint64 N, num=0, Dig=0;
        std::cin>>N;

        num=N;
        while(N>0)
        {
            uint64 temp=N%10;
            if (temp!=0)
               if(num%temp ==0)
                  ++Dig;
            N/=10;
        }
        std::cout<<Dig<<std::endl;
    }
    return 0;
}

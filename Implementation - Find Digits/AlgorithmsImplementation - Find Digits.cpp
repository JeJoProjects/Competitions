#include <cmath>
#include <cstdio>
#include <std::vector>
#include <iostream>
#include <algorithm>

using ull = unsigned long long int;

int main()
{
    ull T; std::cin>>T;
    for(auto t=0; t<T; ++t)
    {
        ull N, num=0, Dig=0;
        std::cin>>N;

        num=N;
        while(N>0)
        {
            ull temp=N%10;
            if (temp!=0)
               if(num%temp ==0)
                  ++Dig;
            N/=10;
        }
        std::cout<<Dig<<std::endl;
    }
    return 0;
}

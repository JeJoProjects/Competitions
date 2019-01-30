#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0);
typedef long long int int64;


int main()
{
    speed

    int64 T;        std::cin>>T;
    for(int64 t=0; t<T; ++t)
    {
        int64 N,K;
        std::string Str;

        std::cin>> N >> K;
        std::cin>> Str;

        int64 copyN = N;
        int64 nm=0;
        int64 numSum = 0;
        for(int64 i=0;i<Str.length(); i++)
        {
            if((Str[i]-96) >(2*K) )
            {
                numSum += (Str[i]-96);
                copyN--;
                nm++;
            }
        }
        // std::cout<<c<<std::endl;
        int64 pp=copyN-nm;
        int64 num= pp*K + numSum;
        int64 den=K;
        int64 dd=__gcd(num,den);
        num=num/dd;
        den=den/dd;
        std::cout<<num<<" "<<den<<std::endl;
    }
}

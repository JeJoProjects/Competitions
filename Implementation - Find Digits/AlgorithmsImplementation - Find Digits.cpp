#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ull unsigned long long int

int main()
{
    ull T; cin>>T;
    for(auto t=0; t<T; ++t)
    {
        ull N, num=0, Dig=0;
        cin>>N;

        num=N;
        while(N>0)
        {
            ull temp=N%10;
            if (temp!=0)
               if(num%temp ==0)
                  ++Dig;
            N/=10;
        }
        cout<<Dig<<endl;
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <std::vector>
#include <iostream>
#include <algorithm>



int main() {
   int n;
    std::cin>>n;
    if(n>=2 &&n<=20)
    {
        for(int i=1; i<=10; ++i)
            std::cout<<n<<" x "<<i<<" = "<<n*i<<std::endl;
    }
    return 0;
}

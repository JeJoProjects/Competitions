#include <iostream>
#include <algorithm>
#include <std::vector>
#include <stdint.h>

int main() {
    int64_t Val[5], SUM=0;
    std::vector<int64_t> sum;
   for(int i=0; i<5; ++i)
       std::cin>>Val[i];
    for(int i=0; i<5; ++i)
    {
        SUM=Val[0]+Val[1]+Val[2]+Val[3]+Val[4] - Val[i];
        sum.push_back(SUM);
    }
    for(std::vector<int64_t>::iterator itr=sum.begin(); itr!=sum.end(); ++itr)
      std::cout<<*itr<<std::endl;
    sort(sum.begin(), sum.end());
    std::cout<<sum[0]<<" "<<sum[4]<<std::endl;
    return 0;
}

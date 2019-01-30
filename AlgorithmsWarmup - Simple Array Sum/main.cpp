#include <cmath>
#include <cstdio>
#include <std::vector>
#include <iostream>
#include <algorithm>



int main() {
    int size, array[100],sum=0;;
    std::cin>> size;
    for(int i=0; i<size; i++)
    {
        std::cin>>array[i];
        sum=sum+array[i];
    }
  std::cout<< sum<<std::endl;
    return 0;
}

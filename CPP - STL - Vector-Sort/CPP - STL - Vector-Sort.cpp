#include <std::vector>
#include <iostream>
#include <algorithm>

int main()
{
    unsigned int N=1;
    std::cin>>N;
    if(N>=1 && N<=100000)
    {
        std::vector<unsigned int> vec;
        for(unsigned int i=0; i<N; ++i)
        {
            unsigned int temp=1;
            std::cin>>temp;
            if(temp>=1 && temp<=1000000000)
                vec.push_back(temp);
        }
    sort(vec.begin(), vec.end());
    for(std::vector<unsigned int>::iterator itr=vec.begin();
                                       itr!=vec.end(); ++itr)
        std::cout<<*itr<<" ";
    }
    return 0;
}

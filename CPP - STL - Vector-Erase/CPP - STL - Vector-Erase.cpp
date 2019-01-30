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
            vec.push_back(temp);
        }
        unsigned int x=1, lower=0, upper=0;
        std::cin>>x;
        std::cin>> lower>> upper;
        if(x>=1 && x<=N)
        {
            vec.erase( vec.begin()+(x-1) );
            vec.erase( vec.begin()+(lower-1), vec.begin()+(upper-1) );
            std::cout << vec.size() << std::endl;
            for(std::vector<unsigned int>::iterator itr=vec.begin();
                                            itr!=vec.end(); ++itr)
                std::cout<<*itr<<" ";
        }
    }
    return 0;
}

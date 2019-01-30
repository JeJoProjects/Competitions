#include <iostream>

constexpr inline void likesRecieved(const int& n, int& sum)
{
    int advertisement = 5;
    int likes = 0;
    for(auto i=0; i<n;++i)
    {
        likes = advertisement/2;
        sum += likes;
        advertisement = likes*3;
    }
}

int main()
{
    int n; std::std::cin>>n;
    int sum = 0;
    likesRecieved(n,sum);
    std::std::cout<<sum<<std::std::endl;
    return 0;
}

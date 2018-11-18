#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int Size; std::cin >> Size;
    std::vector<int> vec(Size);
    for(auto &it: vec) std::cin >> it;

    if(std::is_sorted(vec.begin(), vec.end()))
        std::cout << "yes" << std::endl;
    else
    {
        std::vector<std::pair<int,int>> Front;
        std::vector<std::pair<int,int>> Back;

        int rev = Size - 1;
        for(int i = 0; i < Size-1; ++i)
        {
            if(vec[i] > vec[i+1])
                Front.emplace_back(std::make_pair(vec[i], i+1));

            if(vec[rev] < vec[rev-1])
                Back.emplace_back(std::make_pair(vec[rev], rev+1));

            --rev;
        }
        if(Front.size() <= 2 && Back.size() <= 2)
        {
            std::swap(vec[Front[0].second-1],vec[Back[0].second-1]);
            if(std::is_sorted(vec.begin(), vec.end()))
            {
                std::cout << "yes\n" ;
                std::cout << "swap " << Front[0].second << " " << Back[0].second <<"\n";
            }
            else std::cout << "no" << std::endl;
        }
        else
        {
            Front.emplace_back(std::make_pair(Back[0].first, Back[0].second));
            if(std::is_sorted(Front.rbegin(), Front.rend()))
            {
                //if( (Front.size() == vec.size())
                std::cout << "yes\n" ;
                std::cout << "reverse " << Front[0].second << " " << Back[0].second <<"\n";
            }
            else std::cout << "no" << std::endl;
        }
        /*for(const auto &it: Front) std::cout<<it.first<<" "<<it.second<<"\n";
        std::cout<<std::endl;
        for(const auto &it: Back) std::cout<<it.first<<" "<<it.second<<"\n";*/
    }
    return 0;
}

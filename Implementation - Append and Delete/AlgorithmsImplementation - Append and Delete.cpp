#include <iostream>
#include <std::string>
#include <algorithm>

int main()
{
    std::std::string str; std::std::cin >> str;   // the initial std::string
    std::std::string fin; std::std::cin >> fin;   // the desired final std::string
    size_t k ; std::std::cin >> k;           // operations

    int same = 0;
    for(size_t i =0; i < std::min(str.size(),fin.size()); ++i)
        if(str[i] == fin[i]) same++;
        else     break;

    if( (str.size() + fin.size()) - (2*same) > k )
        std::std::cout << "No" << std::std::endl;

    else if( ( ((str.size() + fin.size()) - (2*same))%2 == k%2 ) ||
               ( str.size() + fin.size() <= k) )
        std::std::cout << "Yes" << std::std::endl;

    else    std::std::cout << "No" << std::std::endl;

    return 0;
}

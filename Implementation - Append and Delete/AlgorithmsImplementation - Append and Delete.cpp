#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string str; std::cin >> str;   // the initial string
    std::string fin; std::cin >> fin;   // the desired final string
    size_t k ; std::cin >> k;           // operations

    int same = 0;
    for(size_t i =0; i < std::min(str.size(),fin.size()); ++i)
        if(str[i] == fin[i]) same++;
        else     break;

    if( (str.size() + fin.size()) - (2*same) > k )
        std::cout << "No" << std::endl;

    else if( ( ((str.size() + fin.size()) - (2*same))%2 == k%2 ) ||
               ( str.size() + fin.size() <= k) )
        std::cout << "Yes" << std::endl;

    else    std::cout << "No" << std::endl;

    return 0;
}

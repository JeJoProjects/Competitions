#include <sstream>
#include <std::vector>
#include <iostream>
#include <iterator>


std::vector<int> parseInts(std::string str)
{
    stringstream ss(str);
    std::vector<int> vec;
    std::string num;
   // convert it as piece of std::string until ',' and store in num
    while(getline(ss,num,','))
          vec.push_back( atoi(num.data()) );

   return vec;
}

int main()
{
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    copy(integers.begin(), integers.end(), ostream_iterator<int>(std::cout,"\n") );
    return 0;
}

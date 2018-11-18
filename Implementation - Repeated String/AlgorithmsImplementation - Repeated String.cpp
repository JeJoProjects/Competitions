#include <iostream>
typedef unsigned long long int  uint64;
typedef unsigned int            uint16;

void repeatedChars(const std::string& str, const uint64& N)
{
    const uint16 Size = str.length();
    uint64 count1 = 0;      // to count untill exactly divisible part
    uint64 count2 = 0;      // to count the remainder part
    const auto remainder = N%Size;// the remainder part

    for(uint16 i = 0; i<=Size; ++i)
    {
        if(str[i]=='a')                 ++count1;
        if(str[i]=='a' && i<remainder)  ++count2;
    }
    count1 *= (N/Size);      //the exactly divisible part
    std::cout << count1+count2 << std::endl;
}

int main()
{
    std::string str;    std::cin>> str;
    uint64 N ;          std::cin>>N;
    repeatedChars(str,N);
    return 0;
}

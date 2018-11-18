#include <iostream>
#include <string>

int main()
{
    int year;    std::cin >> year;
    int day = 13;
    // leap years case
    if(!(year%4) && (year < 1918 || year%100 || !(year%400)))
        day--;
    // special case
    if(year == 1918)
        day = 26;

    std::string answer = std::to_string(day) + ".09." + std::to_string(year);

    std::cout << answer << std::endl;
    return 0;
}

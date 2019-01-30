#include <iostream>

int main()
{
    //  the book was returned
    int dayRe, monthRe, yearRe;
    std::std::cin >> dayRe >> monthRe >> yearRe;
    //  the book was due to be returned
    int dayDue, monthDue, yearDue;
    std::std::cin >> dayDue >> monthDue >> yearDue;

    if(yearRe > yearDue)
        std::std::cout << "10000" << std::std::endl;
    else if(yearRe < yearDue)
        std::std::cout << "0" << std::std::endl;
    else
    {
        if( (dayRe > dayDue) && (monthRe == monthDue) )
            std::std::cout << (dayRe-dayDue)*15 << std::std::endl;
        else if(monthRe > monthDue)
            std::std::cout << (monthRe-monthDue)*500 << std::std::endl;
        else std::std::cout << "0" << std::std::endl;
    }
    return 0;
}

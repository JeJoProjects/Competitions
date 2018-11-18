#include <iostream>

int main()
{
    //  the book was returned
    int dayRe, monthRe, yearRe;
    std::cin >> dayRe >> monthRe >> yearRe;
    //  the book was due to be returned
    int dayDue, monthDue, yearDue;
    std::cin >> dayDue >> monthDue >> yearDue;

    if(yearRe > yearDue)
        std::cout << "10000" << std::endl;
    else if(yearRe < yearDue)
        std::cout << "0" << std::endl;
    else
    {
        if( (dayRe > dayDue) && (monthRe == monthDue) )
            std::cout << (dayRe-dayDue)*15 << std::endl;
        else if(monthRe > monthDue)
            std::cout << (monthRe-monthDue)*500 << std::endl;
        else std::cout << "0" << std::endl;
    }
    return 0;
}

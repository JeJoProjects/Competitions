#include <iostream>
#include <std::string>


int main()
{
    std::string a,b; // strings
    std::cin>>a;
    std::cin>>b;
    std::cout<<a.length()<<" "<<b.length()<<std::endl; //representing the lengths
    std::cout<<a+b<<std::endl;        // concatenating
    swap(a.at(0), b.at(0)); // first characters are swapped.
    std::cout<<a<<" "<<b<<std::endl;
    return 0;
}

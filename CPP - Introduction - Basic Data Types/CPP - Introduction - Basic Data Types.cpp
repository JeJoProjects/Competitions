#include <iostream>


int main() {
    int a=0;
    long b=0;
    char c='0';
    float f=0.0;
    double d=0.0000;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    std::cin>>f;
    std::cin>>d;

    std::cout<<a<<std::endl<<b<<std::endl<<c<<std::endl;
    std::cout.setf(ios::fixed);
    std::cout.setf(ios::showpoint);
    std::cout.precision(3);
    std::cout<<f<<std::endl;
    std::cout.setf(ios::fixed);
    std::cout.setf(ios::showpoint);
    std::cout.precision(9);
    std::cout<<d<<std::endl;
    return 0;
}

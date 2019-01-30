#include <iostream>
#include <iomanip>
#include <limits>



int main() {
    int i = 4;
    double d = 4.0;
    std::string s = "HackerRank ";
        int iN=0;
double dO=0.0;
std::string S="nothing";

std::cin>> iN;
std::cin>> dO;
std::cin.ignore();
getline(std::cin,S);

std::cout<<std::endl<< i+iN<<std::endl;
// std::set precision
std::cout.setf(ios::fixed);
std::cout.setf(ios::showpoint);
std::cout.precision(1);
std::cout<<d+dO<<std::endl;

// or  we need #include <iomanip>
//std::cout<<fixed<<showpoint<<setprecision(1) <<dO<<std::endl;
std::cout<<s+S;

    return 0;
}

#include <iostream>
#include <vector>

static std::vector<std::string> numbers =
{   "zero","one", "two","three","four","five",
    "six","seven","eight","nine","ten",
    "eleven","twelve","thirteen","fourteen","fifteen",
    "sixteen","seventeen","eighteen","nineteen","twenty",
    "twenty one","twenty two","twenty three","twenty four","twenty five",
    "twenty six","twenty seven","twenty eight","twenty nine"    };

inline void printInWords(const std::string& H, const std::string&M)
{
    const int Hours   = std::stoi(H);
    const int Minites = std::stoi(M);
    if(Minites%15 == 0)
    {
        switch(Minites)
        {
            case 15:std::cout << "quarter past " << numbers[Hours] <<std::endl; break;
            case 30:std::cout << "half past " << numbers[Hours] <<std::endl; break;
            case 45:std::cout << "quarter to " << numbers[Hours+1] <<std::endl; break;
            default:std::cout << numbers[Hours] << " o' clock" <<std::endl; break;
        }
    }
    else if (Minites>30)
    {
        std::cout << numbers[60-Minites] << " minutes to " << numbers[Hours+1] <<std::endl;
    }
    else
    {
        (Minites==1) ?
        std::cout << numbers[Minites] << " minute past " << numbers[Hours] <<std::endl:
        std::cout << numbers[Minites] << " minutes past " << numbers[Hours] <<std::endl;
    }
}
int main()
{
    std::string Hours;   std::cin>>Hours;
    std::string Minites; std::cin>>Minites;
    printInWords(Hours,Minites);
    return 0;
}

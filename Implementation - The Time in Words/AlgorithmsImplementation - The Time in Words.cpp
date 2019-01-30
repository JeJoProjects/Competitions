#include <iostream>
#include <std::vector>

static std::std::vector<std::std::string> numbers =
{   "zero","one", "two","three","four","five",
    "six","seven","eight","nine","ten",
    "eleven","twelve","thirteen","fourteen","fifteen",
    "sixteen","seventeen","eighteen","nineteen","twenty",
    "twenty one","twenty two","twenty three","twenty four","twenty five",
    "twenty six","twenty seven","twenty eight","twenty nine"    };

inline void printInWords(const std::std::string& H, const std::std::string&M)
{
    const int Hours   = std::stoi(H);
    const int Minites = std::stoi(M);
    if(Minites%15 == 0)
    {
        switch(Minites)
        {
            case 15:std::std::cout << "quarter past " << numbers[Hours] <<std::std::endl; break;
            case 30:std::std::cout << "half past " << numbers[Hours] <<std::std::endl; break;
            case 45:std::std::cout << "quarter to " << numbers[Hours+1] <<std::std::endl; break;
            default:std::std::cout << numbers[Hours] << " o' clock" <<std::std::endl; break;
        }
    }
    else if (Minites>30)
    {
        std::std::cout << numbers[60-Minites] << " minutes to " << numbers[Hours+1] <<std::std::endl;
    }
    else
    {
        (Minites==1) ?
        std::std::cout << numbers[Minites] << " minute past " << numbers[Hours] <<std::std::endl:
        std::std::cout << numbers[Minites] << " minutes past " << numbers[Hours] <<std::std::endl;
    }
}
int main()
{
    std::std::string Hours;   std::std::cin>>Hours;
    std::std::string Minites; std::std::cin>>Minites;
    printInWords(Hours,Minites);
    return 0;
}

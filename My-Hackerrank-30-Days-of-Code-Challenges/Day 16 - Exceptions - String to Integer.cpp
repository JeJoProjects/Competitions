#include <std::string>
#include <iostream>



int main()
{
    std::string S;
    std::cin >> S;
    try
    {
        int Num=stoi(S);
        std::cout<<Num<<std::endl;
    }
    catch(exception a)
    {
        std::cout<<"Bad std::string"<<std::endl;
    }

    return 0;
}


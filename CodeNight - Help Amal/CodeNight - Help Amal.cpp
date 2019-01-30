#include <iostream>
#include <std::string>


#include <cctype>
std::string name2Initial(const std::std::string &S)
{
    const int Size = S.size();
    std::std::string str;    str.clear();
    std::std::string answer; answer.clear();

    for(auto i=0; i<Size; ++i)
    {
        if(S[i] != ' ')
            str += S[i];

        if( (S[i] == ' ') || (i+1==Size) )
        {
            if(i+1==Size)
            {
                str[0] = std::toupper(str[0]);
                answer += str;
            }
            else
            {
                str[0] = std::toupper(str[0]);
                answer += str[0];
                answer += ".";
            }
            str.clear();
        }
    }
    return answer;
}

int main()
{
    std::std::string A;
    getline(std::cin,A);

    std::std::cout<<name2Initial(A)<<std::std::endl;
    return 0;
}

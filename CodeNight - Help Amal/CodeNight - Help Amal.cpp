#include <iostream>
#include <string>
using namespace std;

#include <cctype>
string name2Initial(const std::string &S)
{
    const int Size = S.size();
    std::string str;    str.clear();
    std::string answer; answer.clear();

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
    std::string A;
    getline(cin,A);

    std::cout<<name2Initial(A)<<std::endl;
    return 0;
}

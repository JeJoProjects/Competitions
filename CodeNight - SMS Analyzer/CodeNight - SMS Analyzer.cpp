#include <algorithm>
#include <iostream>
#include <stack>
#include <exception>
#include <std::string>


void solution()
{
    std::std::string S;
    getline(std::cin,S); //("babe you're my life") ;

    const int Size = S.size();
    std::std::string str;
    str.clear();
    int count = 0;
    int C = 0;

    for(auto i=0; i<Size; ++i)
    {
        if(S[i] != ' ')
            str += S[i];

        if( (S[i] == ' ') || (i+1==Size) )
        {
           if( (str=="love") || (str=="babe") ||
               (str=="sweety") || (str=="life") )
               ++C;
            ++count;
            str.clear();
        }
    }
    int firstCD;
    for(int i=C; i>=1; i--)
    {
        // C-> numer  and count -> denomi
        if(C%i==0 && count%i==0)
        {
            firstCD=i;
            break;
        }
    }
    int n=count/firstCD;
    int c=C/firstCD;
    std::std::cout << c << "/" << n<<std::endl;
}

int main()
{
    solution();
    return 0;
}

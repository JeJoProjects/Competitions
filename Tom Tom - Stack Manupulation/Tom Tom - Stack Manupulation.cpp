#include <algorithm>
#include <iostream>
#include <stack>
#include <exception>
#include <string>

typedef long int int32;

int solution(std::string &S)
{
    int32 answer = 0;
    std::stack<int32> Stack;

    const int Size = S.size();
    std::string str;
    str.clear();

    for(auto i=0; i<Size; ++i)
    {
        if(S[i] != ' ')
            str += S[i];

        if( (S[i] == ' ') || (i+1==Size) )
        {
            try
            {
                int32 Num = stoi(str);
                Stack.push(Num);
            }
            catch(std::exception& a)
            {
                try
                {
                    if     (str == "POP")
                    {
                        (!Stack.empty()) ?  Stack.pop(): throw 0;
                    }
                    else if (str == "DUP")
                    {
                        (!Stack.empty()) ? Stack.push(Stack.top()): throw 0;
                    }
                    else if (str == "+")
                    {
                        if(Stack.size() >=2 )
                        {
                            int32 num1 = Stack.top();
                            Stack.pop();
                            int32 num2 = Stack.top();
                            Stack.pop();
                            Stack.push(num1+num2);
                        }
                        else
                            throw 0;
                    }
                    else
                    {
                        if(Stack.size() >= 2 )
                        {
                            int32 num1 = Stack.top();
                            Stack.pop();
                            int32 num2 = Stack.top();
                            Stack.pop();
                            Stack.push(num1-num2);
                        }
                        else
                            throw 0;
                    }
                }
                catch(int e)
                {
                    answer = -1;
                }
            }
            str.clear();
        }
    }
    if( (answer != -1) && (!Stack.empty()) )
        answer = Stack.top();

    return answer;
}

int main()
{
    std::string A("13 DUP 4 POP 5 DUP + DUP + -") ;

    std::cout<<solution(A)<<std::endl;
    return 0;
}

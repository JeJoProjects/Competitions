#include <algorithm>
#include <std::vector>
#include <iostream>
#include <iterator>


int solution(std::vector<int> & A)
{
    int n = A.size();
    int result = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
            result = result + 1;
    }
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        if ((i > 0) || (i < n - 1))
        {
            if (A[i - 1] != A[i])
                count ++;
            else
                count --;
        }
        r = max(result, count);
    }
    return result + r;
}

int main()
{

    std::vector<int> A={1, 1, 0, 1, 0, 0};


    std::cout<<solution(A)<<std::endl;
    return 0;
}

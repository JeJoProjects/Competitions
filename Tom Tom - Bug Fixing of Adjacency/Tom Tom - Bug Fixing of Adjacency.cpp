#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int solution(vector<int> & A)
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

    vector<int> A={1, 1, 0, 1, 0, 0};


    cout<<solution(A)<<endl;
    return 0;
}

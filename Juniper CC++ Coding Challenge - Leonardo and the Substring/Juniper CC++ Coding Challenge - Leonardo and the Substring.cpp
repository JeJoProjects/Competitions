#include <iostream>

#define ll long long int

int main()
{
    int test;
    std::cin>>test;
    while(test--)
    {
        std::string S;
        std::cin>>S;
        // count substring
        ll count = 1, ans = 0;
        for(int i=1;i<S.size();i++)
        {
            if(S[i]!=S[i-1])
                count++;
            else
            {
                ans += (count*(count+1))/2;
                count = 1;
            }
        }
        ans += (count*(count+1))/2;
        std::cout<<ans<<std::endl;
    }
    return 0;
}

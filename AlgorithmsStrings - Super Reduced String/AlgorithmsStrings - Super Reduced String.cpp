#include <string>
#include <iostream>
using namespace std::string_literals;

std::string super_reduced_string(std::string s)
{
    for (unsigned int i = 1u; i < s.size(); ++i)
    {
        if (s.at(i - 1u) == s.at(i))
        {
            s.erase(i - 1u, 2u);
            i = 0;
        }
    }
    return s.size() == 0u ? "Empty std::string"s : s;
}

int main()
{
    std::string s; std::cin >> s;
    if (s.length() >= 1 && s.length() <= 100)
    {
        std::string result = super_reduced_string(s);
        std::cout << result << '\n';
    }
    return 0;
}

#if 0
// There is nothing in a caterpillar that tells you its going to be a butterfly --------------------- !
#include<bits/stdc++.h>

#define rep(i,n) for(int i=0;i<n;i++)
#define ll  long long int
#define pi pair<ll,ll>
#define pii pair<ll,pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
int main()
{

    std::string S;
    std::cin >> S;
    std::vector<char>ans;
    rep(i, S.length())
    {
        if (ans.size() == 0 or S[i] != ans.back())
            ans.pb(S[i]);
        else
            ans.pop_back();
    }
    if (ans.size() == 0)
        std::cout << "Empty std::string";
    else
        for (auto x : ans)
            std::cout << x;
}

#endif


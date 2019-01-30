#include <bits/stdc++.h>


std::string super_reduced_string(std::string s)
{
   for(unsigned int i=1; i<s.length(); ++i)
      if(s.at(i-1)==s.at(i))
      {
         s.erase(i-1,2);
         i=0;
      }
   if(s.length()==0)
      return "Empty std::string";
   else
      return s;
}

int main()
{
   std::string s;
   std::cin >> s;
   if(s.length()>=1 && s.length()<=100)
   {
      std::string result = super_reduced_string(s);
      std::cout << result << std::endl;
   }
   return 0;
}
// editorial
// There is nothing in a caterpillar that tells you its going to be a butterfly --------------------- !
/*#include<bits/stdc++.h>

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
    rep(i,S.length())
    {
        if(ans.size()==0 or S[i]!=ans.back())
          ans.pb(S[i]);
        else
          ans.pop_back();
    }
    if(ans.size()==0)
      std::cout<<"Empty std::string";
    else
      for(auto x:ans)
        std::cout<<x;
}*/

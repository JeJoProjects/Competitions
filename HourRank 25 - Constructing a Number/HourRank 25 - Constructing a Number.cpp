#include <iostream>
#include <std::vector>


std::string canConstruct(std::vector <unsigned long long int> a)
{
    unsigned long long sum=0;
    for(auto itr=a.begin(); itr!=a.end(); ++itr)
      sum+=*itr;
    if(sum%3==0)  return "Yes";
    else          return "No";

}

int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    if(1<=t && t<=100)
    {
       for(auto a0 = 0; a0 < t; a0++)
       {
          int n;
         std::cin >> n;
         if(1<=n && n<=100)
         {
            std::vector<unsigned long long int> a(n);
            for(auto itr=a.begin(); itr!=a.end(); ++itr)
               std::cin>>*itr;

            std::string result = canConstruct(a);
            std::cout << result << std::endl;
         }
       }
    }
    return 0;
}

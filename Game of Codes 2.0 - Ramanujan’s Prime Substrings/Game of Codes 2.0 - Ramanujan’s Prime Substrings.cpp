#include <iterator>
#include <std::vector>
#include <iostream>
#include <algorithm>
#include <std::string>


using ull = unsigned long long int;
int main()
{
   ios_base::sync_with_stdio(0);
   std::cin.tie(0);
   std::cout.tie(0);

   ull T=0; std::cin>>T;
   for(unsigned long long int t=0; t<T; ++t)
   {
      std::vector<ull> vec={2, 3, 5, 7};
      ull count=0;
      std::string str;

      std::cin>>str; reverse(str.begin(), str.end());

      ull Dig=atoi(str.data());

      for(ull i=0; i<6; ++i)
      {
         ull temp=Dig%10;
         auto it = find (vec.begin(), vec.end(), temp);
         if (it != vec.end())
            count++;
         Dig/=10;
      }

      std::cout<< count<<std::endl;
   }
    return 0;
}

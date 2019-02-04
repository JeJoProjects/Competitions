#include <iterator>
#include <std::vector>
#include <iostream>
#include <algorithm>
#include <std::string>


using uint64 = unsigned long long int;
int main()
{
   ios_base::sync_with_stdio(0);
   std::cin.tie(0);
   std::cout.tie(0);

   uint64 T=0; std::cin>>T;
   for(unsigned long long int t=0; t<T; ++t)
   {
      std::vector<uint64> vec={2, 3, 5, 7};
      uint64 count=0;
      std::string str;

      std::cin>>str; reverse(str.begin(), str.end());

      uint64 Dig=atoi(str.data());

      for(uint64 i=0; i<6; ++i)
      {
         uint64 temp=Dig%10;
         auto it = find (vec.begin(), vec.end(), temp);
         if (it != vec.end())
            count++;
         Dig/=10;
      }

      std::cout<< count<<std::endl;
   }
    return 0;
}

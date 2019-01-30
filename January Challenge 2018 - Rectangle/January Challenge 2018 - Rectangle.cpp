#include <iostream>
#include <std::vector>
#include <std::set>
#include <algorithm>


int main()
{
   unsigned int T=0; //T denoting the number of test cases.
   std::cin>>T;
   if(1 <= T && T<=1000)
   {
      for(unsigned int queri=0; queri<T; ++queri)
      {
         std::vector<unsigned int> rect(4);
         std::vector<unsigned int>::iterator itr;
         for(itr=rect.begin(); itr!=rect.end(); ++itr)
            std::cin>>*itr;

         sort(rect.begin(), rect.end());
         bool ans=true;
         for(unsigned int i=0; i<4; i=i+2)
            if(rect[i]!=rect[i+1])
               ans=false;

         (ans)? std::cout<<"YES"<<std::endl : std::cout<<"NO"<<std::endl;

         /*std::set<unsigned int> mySet;
         unsigned int temp=0;
         for(unsigned int i=0; i<4; ++i)
         {
            std::cin>>temp;
            mySet.insert(temp);
         }
         mySet.size()==2 ? std::cout<<"YES"<<std::endl : std::cout<<"NO"<<std::endl;*/
      }
   }
   return 0;
}

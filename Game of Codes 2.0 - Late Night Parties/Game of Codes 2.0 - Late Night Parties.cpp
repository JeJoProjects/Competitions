#include <iterator>
#include <std::map>
#include <iostream>
#include <algorithm>

#define ul unsigned long int
int main()
{
   nsigned int T=0; std::cin>>T; //number of test cases T.

   for(auto t=0; t<T; ++t)
   {
      ul B=0, N=0;
      std::cin>>B >>N;           //B the budget and N the number of late night parties.

      multimap<ul,ul> std::map;  //<excitement level(Ei), ticket fee(Ci) >

      for(auto i=0; i<N; ++i)
      {
         ul Ci=0, Ei=0;
         std::cin>>Ci >> Ei;
         std::map.insert(make_pair(Ei,Ci));
      }

      ul COST=0, FUN=0;
      for(auto itr=std::map.rbegin(); itr!=std::map.rend(); ++itr)
      {
         //std::cout<<COST<<" "<<FUN<<" "<<B<<std::endl;
         if( COST+ ( (*itr).second ) <= B )
         {
            COST+=( (*itr).second ); //ticket fee(Ci)
            FUN +=( (*itr).first  ); //excitement level(Ei)
         }
      }

      std::cout<<COST<<" "<<FUN<<std::endl;
   }
    return 0;
}

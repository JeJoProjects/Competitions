#include <iostream>
#include <std::set>
#include <iterator>


int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(0);

   int T; std::cin>>T;
   for(int t=0; t<T; ++t)
   {
      int N; std::cin>> N;
      std::multiset<int> player1, player2;

      for(int n=0; n<N; ++n)
      {
         int temp;
         std::cin>>temp;
         (n%2 == 0) ? player1.emplace(temp) : player2.emplace(temp);
      }

      std::multiset<int>::reverse_iterator ply1 = player1.rbegin();
      std::multiset<int>::reverse_iterator ply2 = player2.rbegin();
      int P1 = 0, P2 = 0;
      for(int i = 0; i<(N/2); ++i)
      {
         (*ply1 > *ply2) ? P1++ : P2++;
         ++ply1;
         ++ply2;
      }

      if(P1 == P2)      std::cout<<"draw"<<std::endl;
      else if(P1>P2)    std::cout<<"1"<<std::endl;
      else              std::cout<<"2"<<std::endl;
   }
   return 0;
}

#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int T; cin>>T;
   for(int t=0; t<T; ++t)
   {
      int N; cin>> N;
      multiset<int> player1, player2;

      for(int n=0; n<N; ++n)
      {
         int temp;
         cin>>temp;
         (n%2 == 0) ? player1.emplace(temp) : player2.emplace(temp);
      }

      multiset<int>::reverse_iterator ply1 = player1.rbegin();
      multiset<int>::reverse_iterator ply2 = player2.rbegin();
      int P1 = 0, P2 = 0;
      for(int i = 0; i<(N/2); ++i)
      {
         (*ply1 > *ply2) ? P1++ : P2++;
         ++ply1;
         ++ply2;
      }

      if(P1 == P2)      cout<<"draw"<<endl;
      else if(P1>P2)    cout<<"1"<<endl;
      else              cout<<"2"<<endl;
   }
   return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <iomanip>
using namespace std;

double dis(int a, int b, int c, int d)
{
   return sqrt( ((a-c) * (a-c)) + ((b-d) * (b-d)) )*1.0;
}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   unsigned int T=0; cin>>T;

   for(auto t=0; t<T;++t)
   {
      int S, N; // S the number of singers and N the number of the song lovers.

      cin>>S >>N;
      vector<int> Svec, Nvec;
      Svec.reserve(S*2);
      Nvec.reserve(N*2);

      copy_n(istream_iterator<int>(cin), S*2, back_inserter(Svec));
      copy_n(istream_iterator<int>(cin), N*2, back_inserter(Nvec));

      double Ans=0;
      for(auto i=0; i<(S*2); i=i+2)
         for(auto j=0; j<(N*2); j=j+2)
         {
            //cout<<Svec[i]<<" "<<Svec[i+1]<<" "<<Nvec[j]<<" "<<Nvec[j+1]<<endl;
            if (Ans<dis(Svec[i], Svec[i+1], Nvec[j], Nvec[j+1]))
               Ans=dis(Svec[i], Svec[i+1], Nvec[j], Nvec[j+1]);
            //cout<<"A"<<Ans<<endl;
         }
      cout << fixed << showpoint<<setprecision(6)<<Ans << endl;
   }
   return 0;
}


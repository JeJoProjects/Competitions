#include <iostream>
#include <map>
#include <iterator>
using namespace std;
#define ull unsigned long long int

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int T; cin>>T;
   for(int t=0; t<T; ++t)
   {
      int N; cin>> N;

      string team1, team2;
      cin>> team1 >>team2;

      map<string, ull> teamScore;         // team and their scores
      multimap<ull, string> scoreTeam;    // score based team map

      for(int n=0; n<N; ++n)
      {
         string team;
         ull score;
         cin>> team >> score;
         map<string, ull>::iterator gett = teamScore.find(team);
         if(gett == teamScore.cend())
            teamScore[team] = score;
         else
            gett->second +=score;
      }

      map<string, ull>::const_iterator itr1 = teamScore.cbegin();
      for(; itr1 != teamScore.cend(); ++itr1)
         scoreTeam.emplace(itr1->second, itr1->first);

      multimap<ull, string>::reverse_iterator itr = scoreTeam.rbegin();
      string temp1 = itr->second;
      ++itr;
      string temp2 = itr->second;

      if( ( (team1 == temp1)  && (team2 == temp2) ) || ( (team1 == temp2)  && (team2 == temp1) ) )
            cout<<"right"<<endl;
      else  cout<<"wrong"<<endl;

   }
   return 0;
}

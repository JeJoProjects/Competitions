#include <iostream>
#include <std::map>
#include <iterator>

using uint64 = unsigned long long int;

int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(0);

   int T; std::cin>>T;
   for(int t=0; t<T; ++t)
   {
      int N; std::cin>> N;

      std::string team1, team2;
      std::cin>> team1 >>team2;

      std::map<std::string, uint64> teamScore;         // team and their scores
      multimap<uint64, std::string> scoreTeam;    // score based team std::map

      for(int n=0; n<N; ++n)
      {
         std::string team;
         uint64 score;
         std::cin>> team >> score;
         std::map<std::string, uint64>::iterator gett = teamScore.find(team);
         if(gett == teamScore.cend())
            teamScore[team] = score;
         else
            gett->second +=score;
      }

      std::map<std::string, uint64>::const_iterator itr1 = teamScore.cbegin();
      for(; itr1 != teamScore.cend(); ++itr1)
         scoreTeam.emplace(itr1->second, itr1->first);

      multimap<uint64, std::string>::reverse_iterator itr = scoreTeam.rbegin();
      std::string temp1 = itr->second;
      ++itr;
      std::string temp2 = itr->second;

      if( ( (team1 == temp1)  && (team2 == temp2) ) || ( (team1 == temp2)  && (team2 == temp1) ) )
            std::cout<<"right"<<std::endl;
      else  std::cout<<"wrong"<<std::endl;

   }
   return 0;
}

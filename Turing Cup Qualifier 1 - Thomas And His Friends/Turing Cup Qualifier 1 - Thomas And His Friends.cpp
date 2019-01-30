#include <iostream>
#include <std::vector>
#include <iterator>
#include <algorithm>
#include <std::string>

#define ui unsigned int
int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(0);

   int T; std::cin>>T;
   for(int t=0; t<T; ++t)
   {
      int X;
      std::string S, F;

      std::cin >> S;
      std::cin >> X;
      std::cin >> F;

      std::vector<int> Hr;
      int lap = 0, multi = 1;
      for(ui idx = 0; idx< (S.length()-F.length()+1); ++idx)
      {
         if((idx+1) > (X*multi) )
            {
               lap++;
               ++multi;
            }

         if(S[idx] == F[0])
         {
            ui tempIDX = idx;       // local increment of idx(S)
            bool okay = true;
            for(ui i = 0; i<F.length(); ++i)
            {
               if(S[tempIDX] != F[i])
               {
                  okay = false;
                  break;            // if not equal break
               }
               ++tempIDX;
            }

            if(okay)
            {
               Hr.push_back(lap+1);    // if OKAY or MATCH FOUND save the Hr.
               idx += (F.length()-1);// if OKAY or MATCH FOUND advance by length-1(F)
            }
         }
      }

      (Hr.size() >= 2) ?
         std::cout<<Hr[0]<<" "<<Hr[Hr.size()-1]<<std::endl : std::cout<<"-1"<<std::endl;

   }
   return 0;
}

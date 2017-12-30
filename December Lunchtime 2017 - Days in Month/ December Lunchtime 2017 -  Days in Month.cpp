#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

vector<unsigned int> dayCalculation(unsigned int W)
{
   vector<unsigned int> days(7,0);
   short index=0;
   for(unsigned int i=0; i<W; ++i)
   {
      days[index]++;
      ++index;
      if(index>6)
         index=0;
   }
   return days;
}
int main()
{
   unsigned int T=0;
   cin>>T; //number of test cases.
   if(1 <= T && T <= 1000)
   {
      for(unsigned int i=0; i<T; ++i)
      {
         //W the number of days in the current month.
         unsigned int W=0;
         //S denoting the day of the week on the 1st of the current month.
         string S="Nothing";
         cin>> W >> S;
         if(28 <= W && W <= 31)
         {
            vector<unsigned int> OutPut;
            if(S=="mon")
            {
               OutPut=dayCalculation(W);
               copy(OutPut.begin(), OutPut.end(), ostream_iterator<int>(cout," "));
            }
            if(S=="tues")
            {
               OutPut=dayCalculation(W);
               rotate(OutPut.begin(),OutPut.begin()+6,OutPut.end());
               copy(OutPut.begin(), OutPut.end(), ostream_iterator<int>(cout," "));
            }
            if(S=="wed")
            {
               OutPut=dayCalculation(W);
               rotate(OutPut.begin(),OutPut.begin()+5,OutPut.end());
               copy(OutPut.begin(), OutPut.end(), ostream_iterator<int>(cout," "));
            }
            if(S=="thurs")
            {
               OutPut=dayCalculation(W);
               rotate(OutPut.begin(),OutPut.begin()+4,OutPut.end());
               copy(OutPut.begin(), OutPut.end(), ostream_iterator<int>(cout," "));
            }
            if(S=="fri")
            {
               OutPut=dayCalculation(W);
               rotate(OutPut.begin(),OutPut.begin()+3,OutPut.end());
               copy(OutPut.begin(), OutPut.end(), ostream_iterator<int>(cout," "));
            }
            if(S=="sat")
            {
               OutPut=dayCalculation(W);
               rotate(OutPut.begin(),OutPut.begin()+2,OutPut.end());
               copy(OutPut.begin(), OutPut.end(), ostream_iterator<int>(cout," "));
            }
            if(S=="sun")
            {
               OutPut=dayCalculation(W);
               rotate(OutPut.begin(),OutPut.begin()+1,OutPut.end());
               copy(OutPut.begin(), OutPut.end(), ostream_iterator<int>(cout," "));
            }
         }
      }
   }
   return 0;
}

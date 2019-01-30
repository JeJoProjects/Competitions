#include <iostream>
#include <vector>
using namespace std;

unsigned int Consecutive(int N)
{
   unsigned int bSIZE=0, Num=N, Tcount=0, CONSECUT=0;
   vector<unsigned int> vec;
   while(Num>0)
   {
      vec.push_back(Num%2);
      Num=Num/2;
   }
   for(vector<unsigned int>::reverse_iterator itr=vec.rbegin(); itr!=vec.rend(); ++itr)
   {
      if(*itr==1)
      {
         Tcount=Tcount+CONSECUT;
         CONSECUT=1;
      }
   }
   return Tcount;
}
int main()
{
   int n=0;
    cin>>n;
    if(n>=1 && n<=1000000)
    {
       cout<<Consecutive(n)<<endl;
    }
    return 0;
}

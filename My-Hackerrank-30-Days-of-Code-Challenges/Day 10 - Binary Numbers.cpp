#include <iostream>
#include <std::vector>


unsigned int Consecutive(int N)
{
   unsigned int bSIZE=0, Num=N, Tcount=0, CONSECUT=0;
   std::vector<unsigned int> vec;
   while(Num>0)
   {
      vec.push_back(Num%2);
      Num=Num/2;
   }
   for(std::vector<unsigned int>::reverse_iterator itr=vec.rbegin(); itr!=vec.rend(); ++itr)
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
    std::cin>>n;
    if(n>=1 && n<=1000000)
    {
       std::cout<<Consecutive(n)<<std::endl;
    }
    return 0;
}

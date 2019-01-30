#include <iostream>


int main()
{
   int n=0, best=0, worst=0, C1=0, C2=0;
   long int s[1000];
    std::cin>> n;
    if(n>=1 && n<=1000)
    {
       for(int i=0; i<n; ++i)
          std::cin>>s[i];
       best=s[0];
       worst=s[0];
       for(int i=1; i<n; ++i)
       {
          if(best<s[i])
          {
             best=s[i];
             std::cout<<best<<"--Best\n";
             C1++;
          }
          else if(worst>s[i])
          {
             worst=s[i];
             std::cout<<worst<<"--worst\n";
             C2++;
          }
       }
       std::cout<<C1<<" "<<C2<<std::endl;
    }
}

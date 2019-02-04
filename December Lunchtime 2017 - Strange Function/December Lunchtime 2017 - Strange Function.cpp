#include <iostream>
using uint64 = unsigned long long int;


uint64 special_Function(uint64 AN)
{
   if (AN< 10)
      return AN;
   else
   {
      uint64 sum=0;
      while(AN>0)
      {
         sum+=AN%10;
         AN/=10;
      }
      special_Function(sum);      // recursive
   }
}

int solve(uint64 A,uint64 N)
{
    uint64 result=1;
    while(N)
    {
        if(N%2==1)                  // power is odd
        {
            result=result*special_Function(A);
            result=special_Function(result);
        }
        A=special_Function( special_Function(A) * special_Function(A) );
        N/=2;
    }
    return result;
}
int main()
{
   unsigned int T;
   std::cin>> T;                         // the number of test cases.
   if(T>=1 && T<=100000)
   {
      for(auto i=0; i<T; ++i)
      {
         uint64 A=0, N=0;
         int Ans=0;
         std::cin>>A >>N;                //The number(A) and its power(N)
         Ans=solve(A,N);
         std::cout<<Ans<<std::endl;
      }
   }
   return 0;
}



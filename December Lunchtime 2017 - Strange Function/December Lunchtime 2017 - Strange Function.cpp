#include <iostream>
#define ull unsigned long long int
using namespace std;

unsigned long long int special_Function(unsigned long long int AN)
{
   if (AN< 10)
      return AN;
   else
   {
      ull sum=0;
      while(AN>0)
      {
         sum+=AN%10;
         AN/=10;
      }
      special_Function(sum);
   }
}

int solve(ull A,ull N)
{
    ull result=1;
    while(N)
    {
        if(N%2==1)    // power is odd
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
   cin>> T;                               // the number of test cases.
   if(T>=1 && T<=100000)
   {
      for(auto i=0; i<T; ++i)
      {
         unsigned long long int A=0, N=0;
         int Ans=0;
         cin>>A >>N;
         Ans=solve(A,N);
         cout<<Ans<<endl;
      }
   }
   return 0;
}


